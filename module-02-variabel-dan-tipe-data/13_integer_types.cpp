// Tujuan: short, int, long, long long dan unsigned dipakai untuk menampilkan contoh bilangan bulat.

#include <iostream>

int main() {
    // Tiap tipe integer memiliki jangkauan dan aturan tanda yang berbeda.
    short kecil = -12;
    int biasa = 1000;
    long panjang = 100000L;
    long long sangatPanjang = 9000000000LL;
    unsigned int tidakNegatif = 42U;
    std::cout << kecil << ' ' << biasa << ' ' << panjang << ' '
              << sangatPanjang << ' ' << tidakNegatif << '\n';
}