// Tujuan: Dua fungsi luas bernama sama dibedakan berdasarkan jumlah parameter.

#include <iostream>
int luas(int sisi) { return sisi * sisi; }
int luas(int panjang, int lebar) { return panjang * lebar; }
// Banyaknya parameter menentukan overload luas yang dipanggil.
int main() { std::cout << luas(3) << ' ' << luas(3, 4) << '\n'; }