// Tujuan: static_cast<double> mengubah pembilang sebelum pembagian agar hasil pecahan tidak hilang.

#include <iostream>

int main() {
    // Konversi eksplisit pembilang ke double dilakukan sebelum operasi bagi.
    int total = 7;
    int banyak = 2;
    double rataRata = static_cast<double>(total) / banyak;
    std::cout << "Rata-rata: " << rataRata << '\n';
}