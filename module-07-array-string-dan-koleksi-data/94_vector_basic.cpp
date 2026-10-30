// Tujuan: std::vector menyimpan tiga bilangan dalam koleksi berukuran dinamis.

#include <iostream>
#include <vector>
// vector menyimpan elemen berurutan dan dapat bertambah dinamis.
int main() { std::vector<int> angka{1, 2, 3}; for (int nilai : angka) std::cout << nilai << ' '; std::cout << '\n'; }