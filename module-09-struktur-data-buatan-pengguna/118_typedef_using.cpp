// Tujuan: using memberi nama singkat untuk vector<int> lalu digunakan membuat daftar nilai.

#include <iostream>
#include <vector>
using DaftarNilai = std::vector<int>;
// Alias using memberi nama singkat bagi tipe vector<int>.
int main() { DaftarNilai nilai{80, 90}; std::cout << nilai[0] << ' ' << nilai[1] << '\n'; }