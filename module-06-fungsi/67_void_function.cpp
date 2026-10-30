// Tujuan: Fungsi void mencetak garis sesuai panjang tanpa mengembalikan nilai.

#include <iostream>
void cetakGaris(int panjang) {
    for (int i = 0; i < panjang; ++i) std::cout << '-';
    std::cout << '\n';
}
// Fungsi void melakukan keluaran tetapi tidak mengembalikan nilai.
int main() { cetakGaris(10); }