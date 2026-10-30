// Tujuan: enum biasa memberi nama pada nilai integer untuk hari.

#include <iostream>
enum Hari { Senin, Selasa, Rabu };
// Nilai enum mewakili pilihan hari dengan nama yang jelas.
int main() { Hari hari = Selasa; std::cout << "Nomor hari (mulai 0): " << hari << '\n'; }