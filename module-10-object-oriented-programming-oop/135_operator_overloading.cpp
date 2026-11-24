// Tujuan: operator+ didefinisikan untuk menambah komponen dua Titik.

#include <iostream>
struct Titik {
    int x, y;
    Titik operator+(const Titik& lain) const { return {x + lain.x, y + lain.y}; }
};
// Overload operator memberi perilaku khusus saat dua objek dioperasikan.
int main() { Titik hasil = Titik{1, 2} + Titik{3, 4}; std::cout << hasil.x << ',' << hasil.y << '\n'; }