// Tujuan: tuple menyimpan tiga tipe dan get mengambil elemen berdasarkan indeks waktu kompilasi.

#include <iostream>
#include <tuple>
// tuple menyimpan lebih dari dua nilai; get memilih elemen menurut indeks.
int main() { auto data = std::make_tuple(1, "Ani", 85); std::cout << std::get<0>(data) << ' ' << std::get<1>(data) << ' ' << std::get<2>(data) << '\n'; }