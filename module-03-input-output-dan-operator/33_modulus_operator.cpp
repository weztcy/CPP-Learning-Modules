// Tujuan: Operator % mengambil sisa pembagian, termasuk untuk memeriksa paritas.

#include <iostream>

int main() {
    // Sisa bagi 2 membedakan bilangan genap dan ganjil.
    int angka = 17;
    std::cout << "17 % 5 = " << angka % 5 << '\n';
    std::cout << "Sisa bagi 2: " << angka % 2 << '\n';
}