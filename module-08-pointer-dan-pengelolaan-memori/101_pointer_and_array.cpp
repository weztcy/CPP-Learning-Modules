// Tujuan: Nama array menunjuk elemen awal; dereference dan offset membaca dua elemen.

#include <iostream>
// Nama array dapat dipakai sebagai alamat elemen pertamanya.
int main() { int angka[]{4, 5, 6}; int* ptr = angka; std::cout << *ptr << ' ' << *(ptr + 1) << '\n'; }