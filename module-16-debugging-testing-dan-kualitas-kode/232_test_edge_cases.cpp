// Tujuan: Faktorial diuji untuk nol, satu dan lima supaya kasus dasar tidak terlewat.

#include <cassert>
#include <iostream>
unsigned long long faktorial(int n) { unsigned long long hasil = 1; for (int i = 2; i <= n; ++i) hasil *= i; return hasil; }
// Kasus nol dan satu adalah batas dasar rekursi faktorial.
int main() { assert(faktorial(0) == 1); assert(faktorial(1) == 1); assert(faktorial(5) == 120); std::cout << "Kasus batas lolos\n"; }