// Tujuan: File contoh dibuat terlebih dahulu agar ifstream punya data untuk dibaca.

#include <fstream>
#include <iostream>
#include <string>
int main() {
    // ifstream membaca data yang sudah tersimpan dari berkas.
    { std::ofstream contoh("contoh.txt"); if (!contoh) return 1; contoh << "Baris contoh\n"; }
    std::ifstream file("contoh.txt"); std::string baris;
    if (!std::getline(file, baris)) return 1;
    std::cout << baris << '\n';
}