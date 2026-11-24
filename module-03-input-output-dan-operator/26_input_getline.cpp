// Tujuan: getline membaca satu baris penuh termasuk spasi untuk nama lengkap.

#include <iostream>
#include <string>

int main() {
    // getline membaca seluruh baris, termasuk spasi di antara kata.
    std::string nama;
    std::cout << "Nama lengkap: ";
    if (!std::getline(std::cin, nama)) return 1;
    std::cout << "Halo, " << nama << '\n';
}