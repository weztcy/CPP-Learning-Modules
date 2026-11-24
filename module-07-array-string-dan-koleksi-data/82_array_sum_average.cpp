// Tujuan: Loop menjumlah empat elemen; cast ke double menjaga rata-rata pecahan.

#include <iostream>
int main() {
    // Total seluruh elemen dibagi banyak elemen untuk mendapat rata-rata.
    int angka[]{3, 5, 7, 9};
    int jumlah = 0;
    for (int nilai : angka) jumlah += nilai;
    std::cout << "Jumlah: " << jumlah << ", rata-rata: " << static_cast<double>(jumlah) / 4 << '\n';
}