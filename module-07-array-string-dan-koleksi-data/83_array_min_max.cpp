// Tujuan: Minimum dan maksimum diperbarui saat setiap elemen dibandingkan.

#include <iostream>
int main() {
    // Perbandingan tiap elemen memperbarui nilai minimum dan maksimum.
    int angka[]{8, 3, 12, 5};
    int minimum = angka[0], maksimum = angka[0];
    for (int nilai : angka) {
        if (nilai < minimum) minimum = nilai;
        if (nilai > maksimum) maksimum = nilai;
    }
    std::cout << minimum << ' ' << maksimum << '\n';
}