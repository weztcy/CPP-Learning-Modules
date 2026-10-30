// Tujuan: Operator << merangkai teks dan bilangan ke std::cout tanpa konversi manual.

#include <iostream>

int main() {
    // Operator << dapat dirangkai untuk mencetak teks dan nilai dalam satu aliran.
    std::cout << "Nama: " << "Ani" << '\n';
    std::cout << "Umur: " << 20 << " tahun\n";
}