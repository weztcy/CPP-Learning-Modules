// Tujuan: Move constructor memindah unique_ptr sehingga kepemilikan hanya ada pada tujuan.

#include <iostream>
#include <memory>
#include <utility>
struct Pemilik {
    std::unique_ptr<int> nilai;
    explicit Pemilik(int n) : nilai(std::make_unique<int>(n)) {}
    Pemilik(Pemilik&& lain) noexcept : nilai(std::move(lain.nilai)) { std::cout << "Dipindah\n"; }
};
// Move constructor memindah kepemilikan resource dari objek lama.
int main() { Pemilik a(42); Pemilik b(std::move(a)); std::cout << *b.nilai << '\n'; }