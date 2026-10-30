// Tujuan: Pointer fungsi menyimpan alamat tambah dan memanggilnya lewat operasi.

#include <iostream>
int tambah(int a, int b) { return a + b; }
int main() {
    // Pointer fungsi menyimpan alamat tambah lalu memanggil fungsi melalui pointer.
    int (*operasi)(int, int) = &tambah;
    std::cout << "Hasil: " << operasi(3, 4) << '\n';
}