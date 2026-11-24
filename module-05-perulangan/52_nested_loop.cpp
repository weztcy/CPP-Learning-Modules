// Tujuan: Dua loop bersarang menghitung tabel perkalian tiga kali tiga.

#include <iostream>
int main() {
    // Loop dalam mengulang sepenuhnya untuk setiap putaran loop luar.
    for (int baris = 1; baris <= 3; ++baris) {
        for (int kolom = 1; kolom <= 3; ++kolom) std::cout << baris * kolom << ' ';
        std::cout << '\n';
    }
}