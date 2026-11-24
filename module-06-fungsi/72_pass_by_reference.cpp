// Tujuan: Parameter int& mengacu ke nilai asli sehingga perubahan bertahan setelah pemanggilan.

#include <iostream>
void ubah(int& asli) { asli = 99; }
// Parameter referensi menunjuk variabel asli sehingga perubahannya terlihat di main.
int main() { int nilai = 5; ubah(nilai); std::cout << "Asli: " << nilai << '\n'; }