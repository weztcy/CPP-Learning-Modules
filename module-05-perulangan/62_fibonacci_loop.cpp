// Tujuan: Dua variabel menyimpan pasangan Fibonacci saat loop menghasilkan sepuluh suku.

#include <iostream>
int main() {
    // Nilai berikutnya adalah jumlah dua nilai Fibonacci sebelumnya.
    unsigned long long a = 0, b = 1;
    for (int i = 0; i < 10; ++i) {
        std::cout << a << ' ';
        auto berikutnya = a + b;
        a = b;
        b = berikutnya;
    }
    std::cout << '\n';
}