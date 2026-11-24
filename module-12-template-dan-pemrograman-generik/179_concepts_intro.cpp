// Tujuan: Constraint std::integral menolak tipe bukan bilangan bulat saat instansiasi template.

#include <concepts>
#include <iostream>
template <std::integral T> T gandakan(T nilai) { return nilai * 2; }
// Konsep integral menolak tipe non-bilangan-bulat pada saat kompilasi.
int main() { std::cout << gandakan(21) << '\n'; }