// Tujuan: std::thread menjalankan tugas, join menunggu selesai sebelum hasil dibaca.

#include <iostream>
#include <thread>
void tugas(int n, int& hasil) { hasil = n * n; }
// join menunggu thread selesai sebelum membaca hasilnya.
int main() { int hasil = 0; std::thread pekerja(tugas, 5, std::ref(hasil)); pekerja.join(); std::cout << hasil << '\n'; }