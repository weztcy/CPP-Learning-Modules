// Tujuan: Friend function mendapat akses khusus untuk membaca field privat.

#include <iostream>
class Rahasia {
    int angka_ = 42;
    friend void lihat(const Rahasia& r);
};
void lihat(const Rahasia& r) { std::cout << r.angka_ << '\n'; }
// friend boleh membaca anggota private meskipun bukan method class.
int main() { Rahasia r; lihat(r); }