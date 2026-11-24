// Tujuan: Operator +, -, * dan / menghitung empat hasil; dua int menghasilkan pembagian bulat.

#include <iostream>

int main() {
    // Karena kedua operand int, operator / membuang bagian pecahan.
    int a = 10, b = 3;
    std::cout << "Jumlah: " << a + b << ", selisih: " << a - b
              << ", kali: " << a * b << ", bagi bulat: " << a / b << '\n';
}