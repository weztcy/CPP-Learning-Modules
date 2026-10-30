// Tujuan: do-while mengeksekusi isi setidaknya sekali sebelum memeriksa kondisi.

#include <iostream>
// do-while menjalankan badan loop sekali sebelum memeriksa kondisi.
int main() { int i = 1; do { std::cout << i++ << ' '; } while (i <= 5); std::cout << '\n'; }