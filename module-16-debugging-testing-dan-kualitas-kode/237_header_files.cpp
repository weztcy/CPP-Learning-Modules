// Tujuan: Header mendeklarasikan kuadrat, file pendukung mendefinisikan, file utama memanggil; kedua cpp harus dilink.

#include "237_perhitungan.h"
#include <iostream>
// Deklarasi pada header dihubungkan ke definisi di file sumber lain.
int main() { std::cout << kuadrat(5) << '\n'; }