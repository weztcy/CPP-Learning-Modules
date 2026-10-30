// Tujuan: Linear scan mengembalikan indeks pertama yang cocok, atau -1 jika tidak ditemukan.

#include <iostream>
int main() {
    // Pencarian membandingkan target dengan tiap elemen hingga ditemukan.
    int angka[]{3, 6, 9, 12};
    int cari = 9, posisi = -1;
    for (int i = 0; i < 4; ++i) if (angka[i] == cari) { posisi = i; break; }
    std::cout << "Indeks: " << posisi << '\n';
}