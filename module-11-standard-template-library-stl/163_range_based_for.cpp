// Tujuan: Range-based for dengan referensi memodifikasi isi vector, lalu loop berikutnya membacanya.

#include <iostream>
#include <vector>
// Range-based for mengiterasi koleksi tanpa indeks manual.
int main() { std::vector<int> angka{1, 2, 3}; for (int& nilai : angka) nilai *= 2; for (int nilai : angka) std::cout << nilai << ' '; std::cout << '\n'; }