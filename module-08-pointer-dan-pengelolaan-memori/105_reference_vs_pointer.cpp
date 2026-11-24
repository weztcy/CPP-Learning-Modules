// Tujuan: Reference dan pointer menunjuk objek yang sama dan keduanya bisa mengubahnya.

#include <iostream>
int main() {
    // Referensi selalu mengacu pada objek; pointer bisa dialihkan atau kosong.
    int angka = 5;
    int& referensi = angka;
    int* pointer = &angka;
    referensi = 6;
    *pointer = 7;
    std::cout << angka << '\n';
}