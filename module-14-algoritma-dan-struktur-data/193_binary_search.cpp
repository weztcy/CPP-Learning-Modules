// Tujuan: Binary search membagi rentang TERURUT menjadi dua sampai nilai ditemukan atau rentang habis.

#include <iostream>
#include <vector>
// Prasyarat: urut sudah terurut menaik; -1 berarti target tidak ditemukan.
int cari(const std::vector<int>& urut, int target) {
    int kiri = 0, kanan = static_cast<int>(urut.size()) - 1;
    // Nilai tengah menentukan separuh rentang yang masih mungkin berisi target.
    while (kiri <= kanan) { int tengah = kiri + (kanan - kiri) / 2; if (urut[tengah] == target) return tengah; if (urut[tengah] < target) kiri = tengah + 1; else kanan = tengah - 1; }
    return -1;
}
// Binary search membandingkan tengah dan membuang separuh ruang pencarian.
int main() { std::cout << "Indeks: " << cari({2, 4, 6, 8}, 6) << '\n'; }