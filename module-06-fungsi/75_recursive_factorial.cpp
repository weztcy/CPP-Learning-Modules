// Tujuan: Kasus dasar n <= 1 mengakhiri rekursi; selain itu n dikalikan faktorial(n-1).

#include <iostream>
unsigned long long faktorial(unsigned int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}
// Faktorial 0 dan 1 bernilai 1; selain itu n dikalikan faktorial n - 1.
int main() { std::cout << "5! = " << faktorial(5) << '\n'; }