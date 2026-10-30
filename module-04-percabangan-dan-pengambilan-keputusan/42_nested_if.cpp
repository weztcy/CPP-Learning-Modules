// Tujuan: if luar memeriksa tiket dan if dalam memeriksa umur; cabang else menangani kegagalan.

#include <iostream>

int main() {
    // Syarat di dalam cabang hanya diperiksa setelah syarat luar terpenuhi.
    bool punyaTiket = true;
    int umur = 19;
    if (punyaTiket) {
        if (umur >= 17) {
            std::cout << "Boleh masuk\n";
        } else {
            std::cout << "Belum cukup umur\n";
        }
    } else {
        std::cout << "Perlu tiket\n";
    }
}