// Tujuan: toupper diterapkan ke setiap karakter lewat unsigned char agar pemanggilannya sah.

#include <cctype>
#include <iostream>
#include <string>
int main() {
    // Method manipulasi mengubah potongan teks tanpa memodifikasi input asal secara manual.
    std::string teks = "Halo Dunia";
    for (char& huruf : teks) huruf = static_cast<char>(std::toupper(static_cast<unsigned char>(huruf)));
    std::cout << teks << '\n';
}