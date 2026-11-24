// Tujuan: Kucing mewarisi bernapas dari Hewan dan menambah method mengeong.

#include <iostream>
class Hewan { public: void bernapas() const { std::cout << "Bernapas\n"; } };
class Kucing : public Hewan { public: void mengeong() const { std::cout << "Meong\n"; } };
// Class turunan mewarisi anggota class dasar yang dapat diakses.
int main() { Kucing k; k.bernapas(); k.mengeong(); }