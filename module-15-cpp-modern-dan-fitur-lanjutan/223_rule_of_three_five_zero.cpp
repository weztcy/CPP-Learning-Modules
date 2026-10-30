// Tujuan: Tiga mengelola raw pointer dengan destructor/copy; Lima menambah move; Nol memakai tipe standard library.

#include <iostream>
#include <memory>
#include <string>
#include <utility>
// Rule of Three: raw pointer memerlukan destructor, salin konstruktor, dan assignment.
struct Tiga {
    int* data;
    explicit Tiga(int n) : data(new int(n)) {}
    ~Tiga() { delete data; }
    Tiga(const Tiga& lain) : data(new int(*lain.data)) {}
    // Alokasikan salinan lebih dulu agar kegagalan alokasi tidak merusak objek.
    Tiga& operator=(const Tiga& lain) { if (this != &lain) { int* baru = new int(*lain.data); delete data; data = baru; } return *this; }
};
// Rule of Five: tambah operasi move di samping salin dan destruksi.
struct Lima {
    std::unique_ptr<int> data;
    explicit Lima(int n) : data(std::make_unique<int>(n)) {}
    ~Lima() = default;
    Lima(const Lima& lain) : data(std::make_unique<int>(*lain.data)) {}
    Lima& operator=(const Lima& lain) { if (this != &lain) data = std::make_unique<int>(*lain.data); return *this; }
    Lima(Lima&&) noexcept = default;
    Lima& operator=(Lima&&) noexcept = default;
};
// Rule of Zero: string mengelola memori sehingga tidak perlu metode khusus.
struct Nol { std::string data; }; // Standard library mengelola salin, pindah, dan destruksi.
// Raw pointer butuh aturan salin dan hancur; tipe RAII dapat mengurusnya otomatis.
int main() { Tiga a(3), b = a; Lima c(5), d = c, e(0); e = std::move(d); Nol f{"teks"}, g = f; std::cout << *a.data << ' ' << *b.data << ' ' << *c.data << ' ' << *e.data << ' ' << g.data << '\n'; }