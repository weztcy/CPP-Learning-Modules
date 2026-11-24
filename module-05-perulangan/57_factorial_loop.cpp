// Tujuan: Hasil perkalian berulang menghitung n!; batas 20 mencegah overflow unsigned long long.

#include <iostream>
int main() {
    // Faktorial diperoleh dengan mengalikan angka dari 1 hingga n.
    int n;
    std::cout << "n (0-20): ";
    if (!(std::cin >> n) || n < 0 || n > 20) return 1;
    unsigned long long hasil = 1;
    for (int i = 2; i <= n; ++i) hasil *= i;
    std::cout << n << "! = " << hasil << '\n';
}