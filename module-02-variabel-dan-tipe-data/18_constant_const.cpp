// Tujuan: const melindungi pi dari perubahan setelah inisialisasi lalu dipakai menghitung luas.

#include <iostream>

int main() {
    // const mencegah nilai pi diubah setelah diinisialisasi.
    const double pi = 3.14159;
    double jariJari = 2.0;
    std::cout << "Luas: " << pi * jariJari * jariJari << '\n';
}