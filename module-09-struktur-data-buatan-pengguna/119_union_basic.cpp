// Tujuan: union memakai ruang penyimpanan bersama; hanya anggota yang terakhir ditulis dibaca.

#include <iostream>
union Nilai { int bulat; float pecahan; };
int main() {
    // Menulis satu anggota union menggantikan anggota yang sebelumnya aktif.
    Nilai nilai{};
    nilai.bulat = 42;
    std::cout << "Bulat: " << nilai.bulat << '\n';
    nilai.pecahan = 3.5f; // Sekarang hanya anggota pecahan yang aktif.
    std::cout << "Pecahan: " << nilai.pecahan << '\n';
}