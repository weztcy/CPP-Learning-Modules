// Tujuan: Saldo privat diubah hanya melalui setor yang menolak jumlah nonpositif.

#include <iostream>
class Rekening {
    int saldo_ = 0;
public:
    void setor(int jumlah) { if (jumlah > 0) saldo_ += jumlah; }
    int saldo() const { return saldo_; }
};
// Data internal hanya diubah lewat operasi publik yang disediakan class.
int main() { Rekening r; r.setor(100); r.setor(-10); std::cout << r.saldo() << '\n'; }