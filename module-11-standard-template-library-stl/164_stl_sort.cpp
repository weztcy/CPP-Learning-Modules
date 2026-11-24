// Tujuan: std::sort mengurutkan vector dengan dua iterator batas rentang.

#include <algorithm>
#include <iostream>
#include <vector>
// sort mengurutkan elemen dalam rentang iterator.
int main() { std::vector<int> angka{4, 1, 3}; std::sort(angka.begin(), angka.end()); for (int n : angka) std::cout << n << ' '; std::cout << '\n'; }