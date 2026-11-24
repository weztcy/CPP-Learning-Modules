// Tujuan: setw menetapkan lebar kolom; fixed dan setprecision mengatur dua angka desimal.

#include <iomanip>
#include <iostream>

int main() {
    // fixed dan setprecision mengatur desimal; setw mengatur lebar keluaran berikutnya.
    double harga = 1234.567;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << std::setw(10) << "Harga" << harga << '\n';
}