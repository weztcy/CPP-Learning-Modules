// Tujuan: Compiler menyimpulkan T dari argumen cetak, tanpa menulis <int> atau <double>.

#include <iostream>
template <typename T> void cetak(T nilai) { std::cout << nilai << '\n'; }
// Compiler menyimpulkan parameter T dari nilai pada tiap pemanggilan.
int main() { cetak(42); cetak(2.5); }