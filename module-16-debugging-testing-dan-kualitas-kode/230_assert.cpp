// Tujuan: assert memeriksa kuadrat(3) saat assertion aktif; pada NDEBUG assert dihilangkan.

#include <cassert>
#include <iostream>
int kuadrat(int n) { return n * n; }
// assert mengecek asumsi saat build tanpa NDEBUG.
int main() { assert(kuadrat(3) == 9); std::cout << "Assertion lolos\n"; }