// Tujuan: Fungsi tambah mengembalikan hasil sehingga bisa langsung dipakai di cout.

#include <iostream>
int tambah(int a, int b) { return a + b; }
// Nilai return dari fungsi tambah dipakai sebagai bagian dari ekspresi cout.
int main() { std::cout << "Hasil: " << tambah(3, 4) << '\n'; }