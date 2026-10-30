// Tujuan: = 0 mewajibkan turunan mengimplementasikan method sapa.

#include <iostream>
struct Penyapa { virtual ~Penyapa() = default; virtual void sapa() const = 0; };
struct PenyapaIndonesia : Penyapa { void sapa() const override { std::cout << "Selamat pagi\n"; } };
// Method virtual murni harus diimplementasikan oleh turunan konkret.
int main() { PenyapaIndonesia p; p.sapa(); }