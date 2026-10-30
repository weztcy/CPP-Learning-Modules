// Tujuan: forward menjaga kategori lvalue/rvalue ketika argumen template diteruskan.

#include <iostream>
#include <utility>
void proses(int&) { std::cout << "lvalue\n"; }
void proses(int&&) { std::cout << "rvalue\n"; }
template <typename T> void teruskan(T&& nilai) { proses(std::forward<T>(nilai)); }
// std::forward menjaga kategori nilai saat diteruskan ke fungsi lain.
int main() { int nilai = 5; teruskan(nilai); teruskan(10); }