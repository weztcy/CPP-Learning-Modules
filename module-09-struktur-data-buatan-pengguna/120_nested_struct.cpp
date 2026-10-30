// Tujuan: struct Siswa berisi struct Alamat; field diakses bertingkat.

#include <iostream>
#include <string>
struct Alamat { std::string kota; int kodePos; };
struct Siswa { std::string nama; Alamat alamat; };
// Struct Siswa menyimpan struct Alamat sebagai salah satu anggotanya.
int main() { Siswa siswa{"Ani", {"Bandung", 40111}}; std::cout << siswa.nama << " di " << siswa.alamat.kota << '\n'; }