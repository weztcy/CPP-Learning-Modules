// Tujuan: Dua namespace memiliki fungsi berbeda yang dipilih dengan prefiks namespace::.

#include <iostream>
namespace geometri { int luasPersegi(int sisi) { return sisi * sisi; } }
namespace angka { int kuadrat(int n) { return n * n; } }
// Prefiks namespace mencegah nama fungsi berbeda saling bertabrakan.
int main() { std::cout << geometri::luasPersegi(3) << ' ' << angka::kuadrat(4) << '\n'; }