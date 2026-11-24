// Tujuan: substr mengambil awal string dan replace mengganti sebagian teks.

#include <iostream>
#include <string>
int main() {
    // Method string mengakses ukuran maupun bagian teks tanpa mengelola buffer manual.
    std::string teks = "Halo dunia";
    std::cout << teks.substr(0, 4) << '\n';
    teks.replace(5, 5, "C++");
    std::cout << teks << '\n';
}