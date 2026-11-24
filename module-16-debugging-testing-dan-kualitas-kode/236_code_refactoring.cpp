// Tujuan: Rumus diskon yang sama diekstraksi ke fungsi untuk mencegah duplikasi perhitungan.

#include <iostream>
double hargaSetelahDiskon(double harga, double persen) { return harga * (1.0 - persen / 100.0); }
// Ekstraksi fungsi mencegah rumus diskon diduplikasi di beberapa tempat.
int main() { std::cout << hargaSetelahDiskon(100, 10) << ' ' << hargaSetelahDiskon(200, 10) << '\n'; }