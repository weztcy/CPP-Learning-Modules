// Tujuan: Fungsi berbasis iterator menjumlah vector dan list dengan implementasi yang sama.

#include <iostream>
#include <list>
#include <vector>
template <typename Iter> int jumlah(Iter awal, Iter akhir) { int total = 0; for (; awal != akhir; ++awal) total += *awal; return total; }
// Iterator awal dan akhir membuat satu algoritma berlaku untuk vector dan list.
int main() { std::vector<int> a{1, 2}; std::list<int> b{3, 4}; std::cout << jumlah(a.begin(), a.end()) << ' ' << jumlah(b.begin(), b.end()) << '\n'; }