// Tujuan: multiset mempertahankan duplikat; count menghitung kemunculan dua.

#include <iostream>
#include <set>
// multiset mengizinkan nilai yang sama muncul lebih dari sekali.
int main() { std::multiset<int> angka{2, 1, 2}; std::cout << "Jumlah 2: " << angka.count(2) << '\n'; }