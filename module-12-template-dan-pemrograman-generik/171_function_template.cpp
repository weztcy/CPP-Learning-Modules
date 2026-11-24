// Tujuan: Function template memilih nilai maksimum untuk instansiasi int dan double.

#include <iostream>
template <typename T> T maksimum(T a, T b) { return a > b ? a : b; }
// T disimpulkan dari argumen sehingga fungsi yang sama bekerja untuk beberapa tipe.
int main() { std::cout << maksimum(3, 5) << ' ' << maksimum(2.5, 1.5) << '\n'; }