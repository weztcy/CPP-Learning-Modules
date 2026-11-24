// Tujuan: set menyortir dan menghilangkan duplikat secara otomatis.

#include <iostream>
#include <set>
// set menyimpan nilai unik dan terurut otomatis.
int main() { std::set<int> unik{3, 1, 3, 2}; for (int n : unik) std::cout << n << ' '; std::cout << '\n'; }