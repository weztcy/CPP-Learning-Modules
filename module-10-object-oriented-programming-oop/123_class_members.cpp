// Tujuan: Data sisi privat disimpan pada objek; method luas menghitungnya.

#include <iostream>
class Persegi {
    int sisi_ = 4;
public:
    int luas() const { return sisi_ * sisi_; }
};
// Anggota private disembunyikan; method public menghitung luasnya.
int main() { Persegi p; std::cout << "Luas: " << p.luas() << '\n'; }