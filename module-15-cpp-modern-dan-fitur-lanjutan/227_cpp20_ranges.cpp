// Tujuan: Views::filter memilih elemen genap lalu transform mengkuadratkannya secara lazy.

#include <iostream>
#include <ranges>
#include <vector>
// Views menghasilkan nilai secara lazy saat hasil diiterasi.
int main() { std::vector<int> angka{1, 2, 3, 4, 5}; for (int n : angka | std::views::filter([](int x) { return x % 2 == 0; }) | std::views::transform([](int x) { return x * x; })) std::cout << n << ' '; std::cout << '\n'; }