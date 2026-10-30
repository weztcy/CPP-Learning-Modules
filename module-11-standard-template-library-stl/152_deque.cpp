// Tujuan: deque menambah dari kedua ujung lalu mencetak isi berurutan.

#include <deque>
#include <iostream>
// deque mendukung operasi pada kedua ujung koleksi.
int main() { std::deque<int> angka{2}; angka.push_front(1); angka.push_back(3); for (int n : angka) std::cout << n << ' '; std::cout << '\n'; }