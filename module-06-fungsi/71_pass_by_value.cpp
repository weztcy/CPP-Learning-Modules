// Tujuan: Parameter salinan diubah dalam fungsi; nilai asli di main tetap sama.

#include <iostream>
void ubah(int salinan) { salinan = 99; std::cout << "Dalam fungsi: " << salinan << '\n'; }
// Pass-by-value mengubah salinan sehingga nilai asli di main tetap sama.
int main() { int nilai = 5; ubah(nilai); std::cout << "Asli: " << nilai << '\n'; }