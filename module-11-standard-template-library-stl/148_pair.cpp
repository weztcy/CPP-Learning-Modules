// Tujuan: pair menyatukan ID dan nama lewat first dan second.

#include <iostream>
#include <utility>
// pair menyimpan dua nilai berbeda dalam first dan second.
int main() { std::pair<int, const char*> siswa{1, "Ani"}; std::cout << siswa.first << ' ' << siswa.second << '\n'; }