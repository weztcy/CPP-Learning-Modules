// Tujuan: std::accumulate mengurangi rentang menjadi satu jumlah dengan nilai awal nol.

#include <iostream>
#include <numeric>
#include <vector>
// accumulate mulai dari nilai awal dan menambahkan seluruh elemen.
int main() { std::vector<int> angka{1, 2, 3, 4}; std::cout << std::accumulate(angka.begin(), angka.end(), 0) << '\n'; }