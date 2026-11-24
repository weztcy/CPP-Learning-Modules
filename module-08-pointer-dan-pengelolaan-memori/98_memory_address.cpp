// Tujuan: Operator & mengambil alamat variabel; alamat yang tercetak berbeda setiap eksekusi.

#include <iostream>
// Operator & mengambil alamat variabel, bukan nilai yang disimpannya.
int main() { int angka = 42; std::cout << "Alamat: " << &angka << '\n'; }