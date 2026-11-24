// Tujuan: Sisa bagi dua menentukan bilangan genap atau ganjil dari input.

#include <iostream>

int main() {
    // Sisa pembagian dengan dua bernilai nol untuk bilangan genap.
    int angka;
    std::cout << "Angka: ";
    if (!(std::cin >> angka)) return 1;
    std::cout << (angka % 2 == 0 ? "Genap" : "Ganjil") << '\n';
}