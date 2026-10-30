// Tujuan: Dua assert memeriksa operasi tambah untuk input positif dan campuran negatif.

#include <cassert>
#include <iostream>
int tambah(int a, int b) { return a + b; }
// assert membandingkan hasil fungsi dengan nilai yang diharapkan.
int main() { assert(tambah(2, 3) == 5); assert(tambah(-2, 2) == 0); std::cout << "2 pengujian berhasil\n"; }