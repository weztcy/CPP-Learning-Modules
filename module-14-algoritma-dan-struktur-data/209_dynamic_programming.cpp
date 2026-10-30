// Tujuan: Tabel fib menyimpan subhasil sebelumnya agar setiap suku dihitung sekali.

#include <iostream>
#include <vector>
// Tabel menyimpan hasil Fibonacci sebelumnya agar tidak dihitung berulang.
// fib[i] memakai dua hasil yang sudah disimpan, bukan memanggil fungsi rekursif.
int main() { std::vector<unsigned long long> fib(11); fib[1] = 1; for (size_t i = 2; i < fib.size(); ++i) fib[i] = fib[i - 1] + fib[i - 2]; std::cout << "F(10) = " << fib[10] << '\n'; }