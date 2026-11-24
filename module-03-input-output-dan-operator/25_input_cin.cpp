// Tujuan: cin membaca satu bilangan; program berhenti jika ekstraksi gagal.

#include <iostream>

int main() {
    // Ekstraksi cin gagal bila masukan tidak cocok dengan tipe int.
    int umur;
    std::cout << "Masukkan umur: ";
    if (!(std::cin >> umur)) return 1;
    std::cout << "Umur Anda: " << umur << '\n';
}