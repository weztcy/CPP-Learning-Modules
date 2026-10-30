// Tujuan: Perbandingan ==, !=, <, >= menghasilkan nilai bool yang ditampilkan dengan boolalpha.

#include <iostream>

int main() {
    // Hasil setiap perbandingan bertipe bool, bukan angka hasil pengurangan.
    int a = 5, b = 7;
    std::cout << std::boolalpha << "a == b: " << (a == b)
              << ", a != b: " << (a != b)
              << ", a < b: " << (a < b)
              << ", a >= b: " << (a >= b) << '\n';
}