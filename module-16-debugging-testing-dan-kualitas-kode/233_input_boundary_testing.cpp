// Tujuan: Validasi diuji pada tepat batas 0/100 serta satu angka di luar tiap sisi.

#include <cassert>
#include <iostream>
bool valid(int nilai) { return nilai >= 0 && nilai <= 100; }
// Uji tepat di batas dan di luar batas menangkap kesalahan perbandingan.
int main() { assert(valid(0)); assert(valid(100)); assert(!valid(-1)); assert(!valid(101)); std::cout << "Batas input lolos\n"; }