// Tujuan: setprecision memperlihatkan perbedaan ketelitian float dan double.

#include <iomanip>
#include <iostream>

int main() {
    // float dan double menyimpan bilangan desimal dengan tingkat presisi berbeda.
    float pendek = 1.234567f;
    double panjang = 1.23456789012345;
    std::cout << std::setprecision(15) << pendek << '\n' << panjang << '\n';
}