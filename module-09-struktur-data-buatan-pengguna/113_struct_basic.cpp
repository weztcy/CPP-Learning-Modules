// Tujuan: struct mengelompokkan nama dan umur dalam satu objek siswa.

#include <iostream>
#include <string>
struct Siswa { std::string nama; int umur; };
// struct mengelompokkan nama dan umur sebagai satu nilai siswa.
int main() { Siswa siswa{"Ani", 18}; std::cout << siswa.nama << ' ' << siswa.umur << '\n'; }