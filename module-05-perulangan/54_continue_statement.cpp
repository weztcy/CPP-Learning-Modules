// Tujuan: continue melewatkan angka tiga tetapi melanjutkan putaran selanjutnya.

#include <iostream>
int main() {
    // continue melewati sisa badan loop dan lanjut ke iterasi berikutnya.
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) continue;
        std::cout << i << ' ';
    }
    std::cout << '\n';
}