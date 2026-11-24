// Tujuan: enum class membatasi nama enumerator dalam scope Status dan mencegah konversi implisit.

#include <iostream>
enum class Status { Menunggu, Berhasil, Gagal };
// enum class membatasi enumerator agar ditulis dengan nama tipenya.
int main() { Status status = Status::Berhasil; if (status == Status::Berhasil) std::cout << "Berhasil\n"; }