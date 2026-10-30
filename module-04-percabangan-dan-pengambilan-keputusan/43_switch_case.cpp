// Tujuan: switch memilih nama hari berdasarkan int dan break mencegah fallthrough.

#include <iostream>

int main() {
    // switch memilih case yang cocok; break mencegah jatuh ke case selanjutnya.
    int hari = 2;
    switch (hari) {
        case 1: std::cout << "Senin\n"; break;
        case 2: std::cout << "Selasa\n"; break;
        default: std::cout << "Hari lain\n";
    }
}