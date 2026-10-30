// Tujuan: getline membaca tiap baris dari file dan nomor baris dihitung terpisah.

#include <fstream>
#include <iostream>
#include <string>
int main() {
    // getline mengambil satu baris berkas pada setiap iterasi.
    { std::ofstream data("baris.txt"); if (!data) return 1; data << "Satu\nDua\nTiga\n"; }
    std::ifstream file("baris.txt"); std::string baris; int nomor = 1;
    while (std::getline(file, baris)) std::cout << nomor++ << ": " << baris << '\n';
}