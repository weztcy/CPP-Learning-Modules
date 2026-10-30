// Tujuan: Class Lampu diinstansiasi menjadi objek dan method nyalakan dipanggil.

#include <iostream>
class Lampu { public: void nyalakan() const { std::cout << "Lampu menyala\n"; } };
// Method public dipanggil lewat objek hasil instansiasi class.
int main() { Lampu lampu; lampu.nyalakan(); }