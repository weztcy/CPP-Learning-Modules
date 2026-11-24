// Tujuan: Blok if menampilkan pesan hanya jika nilai memenuhi batas lulus.

#include <iostream>

int main() {
    // Blok if hanya dijalankan saat syarat nilai minimal terpenuhi.
    int nilai = 80;
    if (nilai >= 75) {
        std::cout << "Lulus\n";
    }
}