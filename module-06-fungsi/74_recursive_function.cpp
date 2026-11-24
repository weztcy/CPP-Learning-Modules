// Tujuan: Fungsi memanggil dirinya sendiri hingga kasus dasar n sama dengan nol.

#include <iostream>
void hitungMundur(int n) {
    if (n == 0) { std::cout << "Selesai\n"; return; }
    std::cout << n << '\n';
    hitungMundur(n - 1);
}
// Kasus dasar menghentikan rekursi; panggilan berikutnya memakai n yang lebih kecil.
int main() { hitungMundur(5); }