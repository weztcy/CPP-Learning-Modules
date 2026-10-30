// Tujuan: Operator + menggabungkan dua string; size membaca panjang gabungannya.

#include <iostream>
#include <string>
int main() {
    // Operasi string membaca dan menggabungkan teks sebagai satu objek.
    std::string depan = "C++", belakang = " modern";
    std::string lengkap = depan + belakang;
    std::cout << lengkap << ", panjang: " << lengkap.size() << '\n';
}