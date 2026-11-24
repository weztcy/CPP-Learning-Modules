// Tujuan: Penghitung bertambah hanya ketika angka 1-10 habis dibagi dua.

#include <iostream>
int main() {
    // Penghitung diubah pada setiap iterasi agar loop mencapai batas.
    int hitung = 0;
    for (int i = 1; i <= 10; ++i) if (i % 2 == 0) ++hitung;
    std::cout << "Bilangan genap 1-10: " << hitung << '\n';
}