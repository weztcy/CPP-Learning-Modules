// Tujuan: Array int berukuran tetap diakses melalui indeks nol dan dua.

#include <iostream>
// Indeks array dimulai dari nol untuk membaca elemen pertama.
int main() { int angka[3]{10, 20, 30}; std::cout << angka[0] << ' ' << angka[2] << '\n'; }