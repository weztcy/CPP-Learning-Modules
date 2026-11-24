// Tujuan: Array pointer dasar menunjuk dua bentuk; panggilan luas memilih method sesuai tipe objek nyata.

#include <iostream>
struct Bentuk { virtual ~Bentuk() = default; virtual double luas() const = 0; };
struct Persegi : Bentuk { double sisi; explicit Persegi(double s) : sisi(s) {} double luas() const override { return sisi * sisi; } };
struct PersegiPanjang : Bentuk { double p, l; PersegiPanjang(double a, double b) : p(a), l(b) {} double luas() const override { return p * l; } };
// Pointer dasar dapat menunjuk turunan dan memanggil method virtualnya.
int main() { Persegi a(3); PersegiPanjang b(3, 4); const Bentuk* bentuk[]{&a, &b}; for (const auto* item : bentuk) std::cout << item->luas() << '\n'; }