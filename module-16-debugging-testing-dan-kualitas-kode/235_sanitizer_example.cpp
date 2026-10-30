// Tujuan: Vector diakses pada indeks yang valid; ubah sementara ke indeks salah HANYA di build sanitizer latihan terisolasi.

#include <iostream>
#include <vector>
int main() {
    // Indeks valid menjaga program normal aman sebelum latihan sanitizer.
    std::vector<int> angka{1, 2, 3};
    // Aktifkan AddressSanitizer: cl /std:c++20 /EHsc /fsanitize=address 235_sanitizer_example.cpp
    // Ubah sementara indeks 2 ke 3 untuk melihat laporan sanitizer, lalu kembalikan.
    std::cout << angka[2] << '\n';
}