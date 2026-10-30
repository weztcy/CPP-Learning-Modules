// Tujuan: Prototype memberi tahu compiler tanda tangan kuadrat sebelum definisinya di bawah main.

#include <iostream>
int kuadrat(int angka); // Deklarasi sebelum pemanggilan.
// Prototipe memberi tahu compiler tanda tangan fungsi sebelum pemanggilannya.
int main() { std::cout << kuadrat(5) << '\n'; }
int kuadrat(int angka) { return angka * angka; }