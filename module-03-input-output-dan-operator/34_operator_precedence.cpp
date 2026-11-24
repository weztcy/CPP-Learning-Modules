// Tujuan: Perkalian lebih dahulu dari penjumlahan; kurung mengubah prioritasnya.

#include <iostream>

int main() {
    // Tanda kurung memaksa penjumlahan dievaluasi sebelum perkalian.
    std::cout << "2 + 3 * 4 = " << 2 + 3 * 4 << '\n';
    std::cout << "(2 + 3) * 4 = " << (2 + 3) * 4 << '\n';
}