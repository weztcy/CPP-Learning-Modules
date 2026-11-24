// Tujuan: Rangkaian if/else if menentukan kategori nilai dari batas tertinggi dahulu.

#include <iostream>

int main() {
    // else if memeriksa syarat berikutnya hanya jika syarat sebelumnya gagal.
    int nilai = 78;
    if (nilai >= 85) {
        std::cout << "A\n";
    } else if (nilai >= 70) {
        std::cout << "B\n";
    } else {
        std::cout << "C\n";
    }
}