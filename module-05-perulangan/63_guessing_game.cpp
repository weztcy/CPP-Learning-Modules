// Tujuan: Mesin acak memilih angka 1-10; loop memberi lima kesempatan dan petunjuk arah.

#include <iostream>
#include <random>
int main() {
    // Bilangan acak disimpan sebagai target; tebakan dibatasi hingga lima percobaan.
    std::mt19937 mesin(std::random_device{}());
    std::uniform_int_distribution<int> angkaAcak(1, 10);
    int rahasia = angkaAcak(mesin), tebakan;
    std::cout << "Tebak angka 1-10 (maksimal 5 kesempatan).\n";
    for (int kesempatan = 1; kesempatan <= 5; ++kesempatan) {
        std::cout << "Tebakan: ";
        // Batasi input ke rentang yang mungkin dipilih mesin.
        if (!(std::cin >> tebakan) || tebakan < 1 || tebakan > 10) return 1;
        if (tebakan == rahasia) { std::cout << "Benar!\n"; return 0; }
        // Petunjuk membantu mempersempit kemungkinan pada giliran berikutnya.
        std::cout << (tebakan < rahasia ? "Terlalu kecil\n" : "Terlalu besar\n");
    }
    std::cout << "Angkanya adalah " << rahasia << '\n';
}