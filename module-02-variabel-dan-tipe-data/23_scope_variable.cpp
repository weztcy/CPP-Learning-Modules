// Tujuan: Angka global tersedia di seluruh file; angka lokal hanya di dalam main, diakses berdampingan tanpa shadowing.

#include <iostream>

int angkaGlobal = 10; // Dapat diakses dari seluruh file.

int main() {
    // Nama global dan lokal memiliki cakupan akses yang berbeda.
    int angkaLokal = 5; // Hanya tersedia di dalam main.
    std::cout << "Lokal: " << angkaLokal << ", global: " << ::angkaGlobal << '\n';
}