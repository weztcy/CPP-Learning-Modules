// Tujuan: std::transform mengubah setiap elemen menjadi kuadratnya melalui lambda.

#include <algorithm>
#include <iostream>
#include <vector>
// transform menulis hasil lambda kembali ke koleksi tujuan.
int main() { std::vector<int> angka{1, 2, 3}; std::transform(angka.begin(), angka.end(), angka.begin(), [](int x) { return x * x; }); for (int n : angka) std::cout << n << ' '; std::cout << '\n'; }