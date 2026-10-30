// Tujuan: Loop membaca tepat tiga elemen ke array, lalu loop kedua mencetaknya.

#include <iostream>
int main() {
    // Masukan diulang untuk mengisi tiap sel array sebelum dipakai.
    int angka[3]{};
    for (int& nilai : angka) if (!(std::cin >> nilai)) return 1;
    for (int nilai : angka) std::cout << nilai << ' ';
    std::cout << '\n';
}