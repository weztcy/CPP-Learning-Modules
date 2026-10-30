// Tujuan: std::sort mengurutkan rentang array dan loop menampilkan hasilnya.

#include <algorithm>
#include <iostream>
int main() {
    // Pengurutan menyusun nilai sebelum hasil ditampilkan.
    int angka[]{5, 1, 4, 2};
    std::sort(std::begin(angka), std::end(angka));
    for (int nilai : angka) std::cout << nilai << ' ';
    std::cout << '\n';
}