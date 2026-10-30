// Tujuan: Array dua dimensi berisi dua baris; dua loop menampilkan tiap sel.

#include <iostream>
int main() {
    // Dua indeks memilih baris dan kolom pada array dua dimensi.
    int matriks[2][3]{{1, 2, 3}, {4, 5, 6}};
    for (const auto& baris : matriks) {
        for (int nilai : baris) std::cout << nilai << ' ';
        std::cout << '\n';
    }
}