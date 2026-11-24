// Tujuan: optional mengembalikan hasil bagi atau nullopt bila pembagi nol.

#include <iostream>
#include <optional>
std::optional<int> bagi(int a, int b) { if (b == 0) return std::nullopt; return a / b; }
// optional mengandung nilai atau kosong; periksa sebelum mengambil nilainya.
int main() { auto hasil = bagi(10, 2); std::cout << "Hasil: " << hasil.value_or(0) << ", bagi nol: " << (bagi(10, 0).has_value() ? "ada" : "kosong") << '\n'; }