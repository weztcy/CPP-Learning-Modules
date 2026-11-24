// Tujuan: std::sort mengurutkan elemen vector melalui pasangan iterator begin/end.

#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    // sort menerima iterator awal dan akhir dari vector.
    std::vector<int> angka{5, 2, 8, 1};
    std::sort(angka.begin(), angka.end());
    for (int nilai : angka) std::cout << nilai << ' ';
    std::cout << '\n';
}