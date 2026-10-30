// Tujuan: bool menyimpan true/false; boolalpha mengubah tampilan dari 1/0 menjadi kata.

#include <iostream>

int main() {
    // boolalpha membuat bool tampil sebagai true atau false, bukan 1 atau 0.
    bool lulus = true;
    bool terlambat = false;
    std::cout << std::boolalpha << "Lulus: " << lulus
              << ", terlambat: " << terlambat << '\n';
}