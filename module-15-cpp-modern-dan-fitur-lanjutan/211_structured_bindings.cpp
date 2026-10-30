// Tujuan: Structured binding memecah pair menjadi variabel id dan nama.

#include <iostream>
#include <utility>
// Structured binding membongkar pair ke dua variabel bernama.
int main() { std::pair<int, const char*> siswa{1, "Ani"}; auto [id, nama] = siswa; std::cout << id << ' ' << nama << '\n'; }