// Tujuan: Class dasar dengan method murni tidak dapat diinstansiasi; Sepeda mengimplementasikannya.

#include <iostream>
struct Kendaraan { virtual ~Kendaraan() = default; virtual void jalan() const = 0; };
struct Sepeda : Kendaraan { void jalan() const override { std::cout << "Mengayuh\n"; } };
// Class abstrak tidak dapat dibuat objek secara langsung.
int main() { Sepeda s; const Kendaraan& k = s; k.jalan(); }