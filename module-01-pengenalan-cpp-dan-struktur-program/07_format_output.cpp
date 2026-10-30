// Tujuan: setw meratakan kolom, fixed dan setprecision membatasi angka menjadi dua desimal.

#include <iomanip>
#include <iostream>

int main() {
    // Manipulator iomanip mengatur lebar, perataan, dan presisi tampilan angka.
    std::cout << std::left << std::setw(12) << "Barang" << "Harga\n";
    std::cout << std::left << std::setw(12) << "Buku";
    std::cout << std::fixed << std::setprecision(2) << 12500.5 << '\n';
}