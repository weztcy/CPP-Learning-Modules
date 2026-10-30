// Tujuan: Parameter tipe default int digunakan bila tipe Data tidak disebutkan.

#include <iostream>
template <typename T = int> struct Data { T nilai; };
// Tipe default int dipilih bila Data tidak diberi argumen template.
int main() { Data<> a{42}; Data<double> b{2.5}; std::cout << a.nilai << ' ' << b.nilai << '\n'; }