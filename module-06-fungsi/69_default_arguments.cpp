// Tujuan: Argumen default dipakai saat sapa dipanggil tanpa nama; argumen eksplisit menggantikannya.

#include <iostream>
void sapa(const char* nama = "Teman") { std::cout << "Halo, " << nama << '\n'; }
// Argumen baku digunakan saat pemanggilan tidak mengirim nilai nama.
int main() { sapa(); sapa("Sari"); }