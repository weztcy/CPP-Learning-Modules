// Tujuan: std::find menghasilkan iterator elemen yang dicari; selisih dari begin menjadi indeks.

#include <algorithm>
#include <iostream>
#include <vector>
// find mengembalikan iterator akhir bila nilai tidak ditemukan.
int main() { std::vector<int> angka{2, 4, 6}; auto it = std::find(angka.begin(), angka.end(), 4); if (it != angka.end()) std::cout << "Indeks: " << it - angka.begin() << '\n'; }