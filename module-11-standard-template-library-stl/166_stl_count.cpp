// Tujuan: std::count menghitung jumlah elemen yang sama dengan dua.

#include <algorithm>
#include <iostream>
#include <vector>
// count menghitung banyak kemunculan nilai dalam rentang.
int main() { std::vector<int> angka{2, 4, 2, 6}; std::cout << "Jumlah 2: " << std::count(angka.begin(), angka.end(), 2) << '\n'; }