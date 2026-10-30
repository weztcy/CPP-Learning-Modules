// Tujuan: remove_if memindahkan elemen yang lolos ke depan dan erase menghapus sisa (erase-remove).

#include <algorithm>
#include <iostream>
#include <vector>
// remove_if memindahkan elemen yang dipertahankan; erase menghapus sisanya.
int main() { std::vector<int> angka{1, 2, 3, 4}; angka.erase(std::remove_if(angka.begin(), angka.end(), [](int x) { return x % 2 == 0; }), angka.end()); for (int n : angka) std::cout << n << ' '; std::cout << '\n'; }