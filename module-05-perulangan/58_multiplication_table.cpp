// Tujuan: Loop mencetak sepuluh hasil kali dari angka lima.

#include <iostream>
int main() {
    // Loop mengalikan input dengan setiap faktor pada tabel.
    int angka = 5;
    for (int i = 1; i <= 10; ++i) std::cout << angka << " x " << i << " = " << angka * i << '\n';
}