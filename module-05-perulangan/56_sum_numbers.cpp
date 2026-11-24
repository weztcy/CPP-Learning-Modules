// Tujuan: Loop mengakumulasi angka dari satu sampai batas input 0-1000.

#include <iostream>
int main() {
    // Akumulator menambahkan setiap bilangan untuk membentuk jumlah keseluruhan.
    int batas;
    std::cout << "Batas (0-1000): ";
    if (!(std::cin >> batas) || batas < 0 || batas > 1000) return 1;
    int jumlah = 0;
    for (int i = 1; i <= batas; ++i) jumlah += i;
    std::cout << "Jumlah: " << jumlah << '\n';
}