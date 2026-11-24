// Tujuan: cin yang gagal dibersihkan lalu sisa baris diabaikan sebelum mencoba lagi.

#include <iostream>
#include <limits>
int main() {
    // clear memulihkan cin; ignore membuang input salah sebelum mencoba ulang.
    int nilai;
    std::cout << "Masukkan angka: ";
    // EOF tidak bisa diperbaiki dengan mencoba ulang; hentikan program.
    while (!(std::cin >> nilai)) {
        if (std::cin.eof()) return 1;
        // Hapus flag gagal dan karakter tersisa agar cin bisa membaca ulang.
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Bukan angka, coba lagi: ";
    }
    std::cout << "Angka: " << nilai << '\n';
}