// Tujuan: Range-based for mengunjungi setiap elemen array tanpa indeks eksplisit.

#include <iostream>
// Range-based for mengambil satu elemen array pada setiap iterasi.
int main() { int angka[]{2, 4, 6}; for (int nilai : angka) std::cout << nilai << ' '; std::cout << '\n'; }