// Tujuan: Fungsi menerima int*, memeriksa null lalu mengubah nilai milik pemanggil.

#include <iostream>
void gandakan(int* nilai) { if (nilai) *nilai *= 2; }
// Fungsi menerima alamat sehingga dapat membaca atau mengubah objek melalui pointer.
int main() { int angka = 7; gandakan(&angka); std::cout << angka << '\n'; }