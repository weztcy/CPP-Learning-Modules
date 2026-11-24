// Tujuan: Kucing mewarisi method Hewan melalui lapisan Mamalia.

#include <iostream>
struct Hewan { void hidup() const { std::cout << "Hidup\n"; } };
struct Mamalia : Hewan { void menyusui() const { std::cout << "Menyusui\n"; } };
struct Kucing : Mamalia { void mengeong() const { std::cout << "Meong\n"; } };
// Turunan bertingkat mewarisi perilaku sepanjang rantai class.
int main() { Kucing k; k.hidup(); k.menyusui(); k.mengeong(); }