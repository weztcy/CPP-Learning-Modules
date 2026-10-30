// Tujuan: list memungkinkan push_front; loop membaca urutan elemennya.

#include <iostream>
#include <list>
// list menautkan elemen sehingga penyisipan tidak perlu menggeser array.
int main() { std::list<int> angka{2, 3}; angka.push_front(1); for (int n : angka) std::cout << n << ' '; std::cout << '\n'; }