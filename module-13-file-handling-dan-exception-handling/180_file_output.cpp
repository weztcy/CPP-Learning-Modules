// Tujuan: ofstream membuka file pada direktori kerja, menulis teks dan mengecek pembukaan.

#include <fstream>
#include <iostream>
// ofstream membuka berkas untuk menulis dan menutupnya saat scope berakhir.
int main() { std::ofstream file("catatan.txt"); if (!file) return 1; file << "Halo dari C++\n"; file.close(); std::cout << "catatan.txt ditulis\n"; }