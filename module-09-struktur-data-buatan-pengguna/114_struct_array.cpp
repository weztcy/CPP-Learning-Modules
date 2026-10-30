// Tujuan: Array berisi dua struct; loop membaca field tiap siswa.

#include <iostream>
#include <string>
struct Siswa { std::string nama; int nilai; };
// Array berisi beberapa struct; loop membaca tiap record.
int main() { Siswa kelas[]{{"Ani", 85}, {"Budi", 90}}; for (const auto& s : kelas) std::cout << s.nama << ": " << s.nilai << '\n'; }