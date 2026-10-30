// Tujuan: Iterator begin/end ditelusuri dan operator * membaca nilai pada posisinya.

#include <iostream>
#include <vector>
// Iterator menunjuk elemen; increment menggesernya ke elemen berikutnya.
int main() { std::vector<int> angka{1, 2, 3}; for (auto it = angka.begin(); it != angka.end(); ++it) std::cout << *it << ' '; std::cout << '\n'; }