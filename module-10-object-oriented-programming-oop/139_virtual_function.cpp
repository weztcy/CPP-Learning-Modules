// Tujuan: Method virtual membuat panggilan melalui referensi dasar menjalankan implementasi Kucing.

#include <iostream>
struct Hewan { virtual ~Hewan() = default; virtual void suara() const { std::cout << "Suara hewan\n"; } };
struct Kucing : Hewan { void suara() const override { std::cout << "Meong\n"; } };
// virtual memilih implementasi sesuai tipe objek nyata saat runtime.
int main() { Kucing k; const Hewan& h = k; h.suara(); }