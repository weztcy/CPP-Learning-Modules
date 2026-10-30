// Tujuan: Pointer int* menyimpan alamat angka lalu operator * membaca nilainya.

#include <iostream>
// Operator * pada pointer membaca nilai di alamat yang ditunjuk.
int main() { int angka = 42; int* ptr = &angka; std::cout << "Nilai: " << *ptr << '\n'; }