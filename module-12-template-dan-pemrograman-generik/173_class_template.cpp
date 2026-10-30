// Tujuan: Class template menyimpan tipe nilai yang ditentukan saat membuat Kotak<int>.

#include <iostream>
template <typename T> class Kotak { T nilai_; public: explicit Kotak(T nilai) : nilai_(nilai) {} T nilai() const { return nilai_; } };
// Class template menghasilkan tipe Kotak khusus untuk tipe nilai yang dipilih.
int main() { Kotak<int> k(42); std::cout << k.nilai() << '\n'; }