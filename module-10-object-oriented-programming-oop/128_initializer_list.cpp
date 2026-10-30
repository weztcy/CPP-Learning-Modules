// Tujuan: Initializer list mengisi const id dan harga sebelum badan constructor berjalan.

#include <iostream>
class Produk {
    const int id_;
    int harga_;
public:
    Produk(int id, int harga) : id_(id), harga_(harga) {}
    void cetak() const { std::cout << id_ << ": " << harga_ << '\n'; }
};
// Initializer list menginisialisasi anggota sebelum badan constructor.
int main() { Produk p(1, 12000); p.cetak(); }