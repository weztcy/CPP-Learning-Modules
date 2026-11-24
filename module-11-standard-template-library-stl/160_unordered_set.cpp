// Tujuan: unordered_set menyimpan kunci unik tanpa urutan terjamin; contains memeriksa anggota.

#include <iostream>
#include <unordered_set>
// unordered_set mengutamakan pencarian hash tanpa jaminan urutan.
int main() { std::unordered_set<int> nilai{1, 2, 2}; std::cout << "Ukuran: " << nilai.size() << ", punya 2: " << nilai.contains(2) << '\n'; }