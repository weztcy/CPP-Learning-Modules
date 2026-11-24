// Tujuan: Linear search memeriksa elemen satu per satu dan mengembalikan posisi pertama.

#include <iostream>
#include <vector>
int cari(const std::vector<int>& data, int target) { for (int i = 0; i < static_cast<int>(data.size()); ++i) if (data[i] == target) return i; return -1; }
// Linear search menguji elemen berurutan sampai ketemu atau habis.
int main() { std::cout << "Indeks: " << cari({4, 8, 12}, 8) << '\n'; }