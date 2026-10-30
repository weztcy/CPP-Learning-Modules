// Tujuan: main memanggil fungsi salam yang ditulis terpisah.

#include <iostream>
void salam() { std::cout << "Halo dari fungsi!\n"; }
// Fungsi salam didefinisikan terpisah lalu dipanggil dari main.
int main() { salam(); }