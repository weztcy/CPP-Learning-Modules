// Tujuan: Pembagian int dengan literal double mengonversi operand int secara implisit.

#include <iostream>

int main() {
    // Operand double membuat hasil pembagian berupa pecahan, bukan pembagian integer.
    int jumlah = 5;
    double hasil = jumlah / 2.0; // int dikonversi secara implisit ke double.
    std::cout << "Hasil: " << hasil << '\n';
}