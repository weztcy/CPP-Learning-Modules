// Tujuan: Input divalidasi 0-100, lalu rentang nilai dipetakan menjadi grade A sampai E.

#include <iostream>

int main() {
    // Rentang nilai divalidasi lebih dulu sebelum dipetakan ke huruf grade.
    int nilai;
    std::cout << "Nilai (0-100): ";
    if (!(std::cin >> nilai) || nilai < 0 || nilai > 100) {
        std::cerr << "Nilai tidak valid\n";
        return 1;
    }
    char grade;
    // Diperiksa dari batas tertinggi: cabang pertama yang cocok menentukan grade.
    if (nilai >= 85) grade = 'A';
    else if (nilai >= 70) grade = 'B';
    else if (nilai >= 55) grade = 'C';
    else if (nilai >= 40) grade = 'D';
    else grade = 'E';
    std::cout << "Grade: " << grade << '\n';
}