// Tujuan: Spesialisasi bool memberi tampilan khusus berbeda dari template umum.

#include <iostream>
template <typename T> struct Penampil { static void cetak(T nilai) { std::cout << "Umum: " << nilai << '\n'; } };
template <> struct Penampil<bool> { static void cetak(bool nilai) { std::cout << (nilai ? "Benar" : "Salah") << '\n'; } };
// Spesialisasi bool mengganti perilaku template umum untuk tipe tersebut.
int main() { Penampil<int>::cetak(5); Penampil<bool>::cetak(true); }