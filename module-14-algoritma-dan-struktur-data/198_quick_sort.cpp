// Tujuan: Quick sort memilih pivot, mempartisi kedua sisi lalu mengurutkan subrentang.

#include <iostream>
#include <vector>
void urut(std::vector<int>& a, int kiri, int kanan) {
    // Rentang kosong atau berisi satu elemen tidak perlu diurutkan.
    if (kiri >= kanan) return;
    int i = kiri, j = kanan, pivot = a[kiri + (kanan - kiri) / 2];
    // Geser i melewati nilai kecil dan j melewati nilai besar; tukar bila perlu.
    while (i <= j) {
        while (a[i] < pivot) ++i;
        while (a[j] > pivot) --j;
        if (i <= j) { int tmp = a[i]; a[i] = a[j]; a[j] = tmp; ++i; --j; }
    }
    // Partisi kiri dan kanan kini bisa diurutkan secara terpisah.
    if (kiri < j) urut(a, kiri, j);
    if (i < kanan) urut(a, i, kanan);
}
// Dua penunjuk mempartisi nilai di sekitar pivot sebelum rekursi.
int main() { std::vector<int> a{5, 1, 4, 2}; urut(a, 0, static_cast<int>(a.size()) - 1); for (int n : a) std::cout << n << ' '; std::cout << '\n'; }