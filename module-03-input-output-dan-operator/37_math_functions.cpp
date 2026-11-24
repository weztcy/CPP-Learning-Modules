// Tujuan: sqrt, pow dan round dari cmath menghitung akar, pangkat, dan pembulatan.

#include <cmath>
#include <iostream>

int main() {
    // Fungsi cmath menghitung akar, pangkat, dan pembulatan dari angka contoh.
    std::cout << "akar 16: " << std::sqrt(16.0) << '\n';
    std::cout << "2 pangkat 3: " << std::pow(2.0, 3.0) << '\n';
    std::cout << "pembulatan 2.7: " << std::round(2.7) << '\n';
}