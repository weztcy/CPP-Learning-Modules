// Tujuan: Setiap sel hasil diisi dengan jumlah dua sel pada indeks baris/kolom yang sama.

#include <iostream>
int main() {
    // Elemen hasil pada posisi yang sama adalah jumlah elemen kedua matriks.
    int a[2][2]{{1, 2}, {3, 4}}, b[2][2]{{5, 6}, {7, 8}}, hasil[2][2]{};
    for (int i = 0; i < 2; ++i) for (int j = 0; j < 2; ++j) hasil[i][j] = a[i][j] + b[i][j];
    for (const auto& baris : hasil) { for (int nilai : baris) std::cout << nilai << ' '; std::cout << '\n'; }
}