// Tujuan: Dua constructor menginisialisasi ukuran default atau ukuran yang diberikan.

#include <iostream>
class PersegiPanjang {
    int panjang_, lebar_;
public:
    PersegiPanjang() : panjang_(1), lebar_(1) {}
    PersegiPanjang(int panjang, int lebar) : panjang_(panjang), lebar_(lebar) {}
    int luas() const { return panjang_ * lebar_; }
};
// Tanda tangan parameter membedakan constructor yang dipilih.
int main() { PersegiPanjang a, b(3, 4); std::cout << a.luas() << ' ' << b.luas() << '\n'; }