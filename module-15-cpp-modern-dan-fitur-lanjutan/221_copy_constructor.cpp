// Tujuan: Copy constructor membuat salinan nilai mandiri; perubahan pada salinan tidak mengubah asal.

#include <iostream>
struct Data { int nilai; explicit Data(int n) : nilai(n) {} Data(const Data& lain) : nilai(lain.nilai) { std::cout << "Disalin\n"; } };
// Copy constructor membuat objek baru dengan data salinan sendiri.
int main() { Data a(5); Data b(a); b.nilai = 10; std::cout << a.nilai << ' ' << b.nilai << '\n'; }