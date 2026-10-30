// Tujuan: Constructor menerima sisi saat objek dibuat; method menghitung luas.

#include <iostream>
class Kotak { int sisi_; public: explicit Kotak(int sisi) : sisi_(sisi) {} int luas() const { return sisi_ * sisi_; } };
// Constructor mengatur keadaan awal objek sewaktu dibuat.
int main() { Kotak k(5); std::cout << k.luas() << '\n'; }