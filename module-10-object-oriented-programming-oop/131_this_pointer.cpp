// Tujuan: this menunjuk objek aktif dan return *this memungkinkan pemanggilan berantai.

#include <iostream>
class Penghitung {
    int nilai_ = 0;
public:
    Penghitung& tambah(int nilai) { this->nilai_ += nilai; return *this; }
    int nilai() const { return nilai_; }
};
// this menunjuk objek yang sedang menjalankan method.
int main() { Penghitung p; std::cout << p.tambah(2).tambah(3).nilai() << '\n'; }