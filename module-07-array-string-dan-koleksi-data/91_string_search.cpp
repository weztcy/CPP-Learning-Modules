// Tujuan: find mencari substring dan npos digunakan sebagai penanda tidak ditemukan.

#include <iostream>
#include <string>
int main() {
    // find mengembalikan posisi saat ketemu, atau npos jika tidak ada.
    std::string teks = "Belajar C++ itu seru";
    auto posisi = teks.find("C++");
    if (posisi != std::string::npos) std::cout << "Ditemukan pada indeks " << posisi << '\n';
}