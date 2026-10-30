// Tujuan: Loop dalam mencetak angka dari satu sampai nomor baris sehingga terbentuk segitiga.

#include <iostream>
int main() {
    // Batas loop dalam berubah mengikuti nomor baris pola.
    for (int baris = 1; baris <= 5; ++baris) {
        for (int angka = 1; angka <= baris; ++angka) std::cout << angka;
        std::cout << '\n';
    }
}