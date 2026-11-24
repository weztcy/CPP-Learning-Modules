// Tujuan: Merge sort membagi rentang, mengurutkan kedua bagian lalu menggabungkannya.

#include <iostream>
#include <vector>
void urut(std::vector<int>& a, int kiri, int kanan) {
    // Rentang [kiri, kanan) berisi nol atau satu elemen: sudah terurut.
    if (kanan - kiri <= 1) return;
    int tengah = kiri + (kanan - kiri) / 2;
    // Urutkan kedua bagian terlebih dahulu sebelum menggabungkannya.
    urut(a, kiri, tengah); urut(a, tengah, kanan);
    std::vector<int> hasil; int i = kiri, j = tengah;
    // Pilih elemen terkecil dari kepala masing-masing bagian yang terurut.
    while (i < tengah && j < kanan) hasil.push_back(a[i] <= a[j] ? a[i++] : a[j++]);
    // Salah satu bagian mungkin masih menyisakan elemen.
    while (i < tengah) hasil.push_back(a[i++]);
    while (j < kanan) hasil.push_back(a[j++]);
    // Salin hasil penggabungan kembali ke rentang asal.
    for (int k = 0; k < static_cast<int>(hasil.size()); ++k) a[kiri + k] = hasil[k];
}
// Rentang dibagi dua sampai satu elemen; dua bagian terurut digabung kembali.
int main() { std::vector<int> a{5, 1, 4, 2}; urut(a, 0, static_cast<int>(a.size())); for (int n : a) std::cout << n << ' '; std::cout << '\n'; }