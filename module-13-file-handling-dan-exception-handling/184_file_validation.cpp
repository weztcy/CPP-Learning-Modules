// Tujuan: ifstream gagal membuka path yang tidak ada; is_open mendeteksi kegagalan.

#include <fstream>
#include <iostream>
int main() {
    // Periksa status stream sebelum memakai file yang gagal dibuka.
    std::ifstream file("file_yang_tidak_ada.txt");
    if (!file.is_open()) std::cout << "File tidak ditemukan; periksa path sebelum membaca.\n";
}