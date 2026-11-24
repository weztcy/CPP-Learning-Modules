// Tujuan: Tiga loop mengalikan baris matriks kiri dengan kolom matriks kanan.

#include <iostream>
int main() {
    // Perkalian matriks menjumlahkan hasil kali baris kiri dengan kolom kanan.
    int a[2][3]{{1, 2, 3}, {4, 5, 6}}, b[3][2]{{7, 8}, {9, 10}, {11, 12}}, hasil[2][2]{};
    // i menentukan baris hasil, j kolom hasil, k menjumlahkan pasangan elemen.
    for (int i = 0; i < 2; ++i) for (int j = 0; j < 2; ++j)
        for (int k = 0; k < 3; ++k) hasil[i][j] += a[i][k] * b[k][j];
    for (const auto& baris : hasil) { for (int nilai : baris) std::cout << nilai << ' '; std::cout << '\n'; }
}