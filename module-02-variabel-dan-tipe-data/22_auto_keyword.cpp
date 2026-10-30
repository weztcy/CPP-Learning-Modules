// Tujuan: auto menyimpulkan tipe dari literal int dan double; hasil perkalian dicetak.

#include <iostream>

int main() {
    // auto mengikuti tipe ekspresi inisialisasi, bukan menetapkan tipe baru.
    auto jumlah = 10;      // int
    auto harga = 2.5;      // double
    std::cout << jumlah * harga << '\n';
}