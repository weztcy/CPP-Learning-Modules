// Tujuan: Dua parameter tipe template membolehkan label teks dan nilai angka pada fungsi yang sama.

#include <iostream>
template <typename A, typename B> void cetak(const A& a, const B& b) { std::cout << a << ": " << b << '\n'; }
// Dua parameter template mengizinkan argumen dengan tipe berbeda.
int main() { cetak("Nilai", 85); }