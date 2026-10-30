// Tujuan: co_yield menangguhkan coroutine; handle dilanjutkan, dibaca, lalu dihancurkan RAII.

#include <coroutine>
#include <iostream>
#include <utility>
struct Generator {
    // Compiler menggunakan promise_type untuk mengatur siklus hidup coroutine.
    struct promise_type {
        int nilai = 0;
        Generator get_return_object() { return Generator{std::coroutine_handle<promise_type>::from_promise(*this)}; }
        // Tunda eksekusi saat dimulai dan sebelum frame dihancurkan.
        std::suspend_always initial_suspend() noexcept { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        // co_yield menyimpan nilai saat ini lalu menangguhkan eksekusi.
        std::suspend_always yield_value(int n) noexcept { nilai = n; return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };
    std::coroutine_handle<promise_type> handle;
    explicit Generator(std::coroutine_handle<promise_type> h) : handle(h) {}
    Generator(Generator&& lain) noexcept : handle(std::exchange(lain.handle, {})) {}
    Generator(const Generator&) = delete;
    // Handle hanya dihancurkan oleh satu pemilik supaya frame tidak bocor.
    ~Generator() { if (handle) handle.destroy(); }
    // resume menjalankan sampai yield berikutnya atau coroutine selesai.
    bool berikutnya() { if (!handle || handle.done()) return false; handle.resume(); return !handle.done(); }
    int nilai() const { return handle.promise().nilai; }
};
// Setiap co_yield mengirim satu angka tanpa mengakhiri fungsi sepenuhnya.
Generator hitung() { for (int n = 1; n <= 3; ++n) co_yield n; }
// promise menyimpan nilai co_yield; handle melanjutkan coroutine satu langkah.
int main() { auto angka = hitung(); while (angka.berikutnya()) std::cout << angka.nilai() << ' '; std::cout << '\n'; }