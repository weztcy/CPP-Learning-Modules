// Tujuan: Aturan habis dibagi 400 atau 4 tetapi bukan 100 menentukan tahun kabisat.

#include <iostream>

int main() {
    // Tahun kelipatan 100 harus juga kelipatan 400 agar tetap kabisat.
    int tahun;
    std::cout << "Tahun: ";
    if (!(std::cin >> tahun) || tahun < 1) return 1;
    bool kabisat = tahun % 400 == 0 || (tahun % 4 == 0 && tahun % 100 != 0);
    std::cout << (kabisat ? "Kabisat" : "Bukan kabisat") << '\n';
}