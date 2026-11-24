// Tujuan: Fungsi sapa menerima parameter nama dan dipanggil dengan dua argumen berbeda.

#include <iostream>
void sapa(const char* nama) { std::cout << "Halo, " << nama << '\n'; }
// Argumen pada pemanggilan diteruskan ke parameter nama.
int main() { sapa("Ani"); sapa("Budi"); }