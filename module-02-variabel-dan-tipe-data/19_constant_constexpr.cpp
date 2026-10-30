// Tujuan: constexpr menentukan ukuran array pada waktu kompilasi; sizeof menghitung banyak sel.

#include <iostream>

int main() {
    // constexpr dihitung pada waktu kompilasi sehingga dapat dipakai sebagai ukuran array.
    constexpr int baris = 3;
    constexpr int kolom = 4;
    int tabel[baris * kolom]{}; // Ukuran array diketahui saat kompilasi.
    std::cout << "Jumlah sel: " << sizeof(tabel) / sizeof(tabel[0]) << '\n';
}