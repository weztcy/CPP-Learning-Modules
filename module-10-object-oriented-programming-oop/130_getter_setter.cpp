// Tujuan: Setter memvalidasi rentang 0-100; getter membaca nilai yang tersimpan.

#include <iostream>
class Siswa {
    int nilai_ = 0;
public:
    bool setNilai(int nilai) { if (nilai < 0 || nilai > 100) return false; nilai_ = nilai; return true; }
    int getNilai() const { return nilai_; }
};
// Getter membaca keadaan; setter memvalidasi perubahan sebelum menyimpannya.
int main() { Siswa s; s.setNilai(85); std::cout << s.getNilai() << '\n'; }