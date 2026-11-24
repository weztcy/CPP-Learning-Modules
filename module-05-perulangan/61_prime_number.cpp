// Tujuan: Pembagi dicoba sampai akar bilangan secara implisit; kurang dari dua bukan prima.

#include <iostream>
int main() {
    // Cukup periksa pembagi hingga akar angka; pembagi lebih besar punya pasangan lebih kecil.
    int angka;
    std::cout << "Angka: ";
    if (!(std::cin >> angka)) return 1;
    bool prima = angka >= 2;
    // Jika angka punya faktor, salah satunya tidak lebih besar dari akar angka.
    // Bentuk pembagi <= angka / pembagi menghindari perkalian yang bisa overflow.
    for (int pembagi = 2; pembagi <= angka / pembagi; ++pembagi) {
        if (angka % pembagi == 0) { prima = false; break; }
    }
    std::cout << (prima ? "Prima" : "Bukan prima") << '\n';
}