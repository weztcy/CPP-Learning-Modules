// Tujuan: Anggota static jumlah dibagi semua instance dan dihitung saat constructor/destructor.

#include <iostream>
class Objek {
public:
    static int jumlah;
    Objek() { ++jumlah; }
    ~Objek() { --jumlah; }
};
int Objek::jumlah = 0;
// Anggota static dimiliki bersama oleh semua objek class.
int main() { Objek a, b; std::cout << Objek::jumlah << '\n'; }