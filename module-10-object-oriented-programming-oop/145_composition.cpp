// Tujuan: Mobil memiliki Mesin sebagai anggota; keduanya hidup dan hancur bersama.

#include <iostream>
struct Mesin { void nyalakan() const { std::cout << "Mesin hidup\n"; } };
class Mobil {
    Mesin mesin_; // Mesin dimiliki oleh mobil.
public: void berangkat() const { mesin_.nyalakan(); std::cout << "Mobil berjalan\n"; }
};
// Composition menyimpan objek lain sebagai anggota yang dimiliki.
int main() { Mobil mobil; mobil.berangkat(); }