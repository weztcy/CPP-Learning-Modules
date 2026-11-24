// Tujuan: Loop dalam mencetak sejumlah bintang sesuai nomor baris.

#include <iostream>
int main() {
    // Loop luar memilih baris, loop dalam mencetak banyaknya bintang.
    for (int baris = 1; baris <= 5; ++baris) {
        for (int kolom = 0; kolom < baris; ++kolom) std::cout << '*';
        std::cout << '\n';
    }
}