// Tujuan: Fungsi menerima const Buku& agar record dibaca tanpa salinan.

#include <iostream>
#include <string>
struct Buku { std::string judul; int halaman; };
void cetak(const Buku& buku) { std::cout << buku.judul << " (" << buku.halaman << " halaman)\n"; }
// Referensi const meneruskan Buku ke fungsi tanpa menyalinnya.
int main() { Buku buku{"C++", 120}; cetak(buku); }