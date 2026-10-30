// Tujuan: Menulis melalui *ptr mengubah angka asli yang ditunjuk.

#include <iostream>
// Dereferensi pointer mengakses objek yang ditunjuk, bukan alamatnya.
int main() { int angka = 5; int* ptr = &angka; *ptr = 10; std::cout << "Angka: " << angka << '\n'; }