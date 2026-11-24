// Tujuan: File dibuat, kemudian ios::app menambah baris tanpa menimpa isi awal.

#include <fstream>
#include <iostream>
#include <string>
int main() {
    // Mode app menambah data di akhir tanpa menimpa isi lama.
    { std::ofstream awal("log.txt"); if (!awal) return 1; awal << "Pertama\n"; }
    { std::ofstream tambahan("log.txt", std::ios::app); if (!tambahan) return 1; tambahan << "Kedua\n"; }
    std::ifstream baca("log.txt"); std::string baris;
    while (std::getline(baca, baris)) std::cout << baris << '\n';
}