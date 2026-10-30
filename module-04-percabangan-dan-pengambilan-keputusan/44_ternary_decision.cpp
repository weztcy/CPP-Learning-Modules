// Tujuan: Operator ternary menetapkan pesan lulus atau belum lulus pada satu ekspresi.

#include <iostream>

int main() {
    // Ekspresi ternary mengembalikan salah satu nilai tanpa blok if terpisah.
    int nilai = 82;
    const char* hasil = nilai >= 75 ? "Lulus" : "Belum lulus";
    std::cout << hasil << '\n';
}