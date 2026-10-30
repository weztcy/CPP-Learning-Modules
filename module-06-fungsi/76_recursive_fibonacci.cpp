// Tujuan: Kasus dasar 0/1 dan dua pemanggilan rekursif menghasilkan sepuluh bilangan Fibonacci kecil.

#include <iostream>
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// Dua pemanggilan rekursif menghitung dua suku Fibonacci sebelumnya.
int main() { for (int n = 0; n < 10; ++n) std::cout << fibonacci(n) << ' '; std::cout << '\n'; }