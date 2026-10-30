// Tujuan: Multifungsi mewarisi dua kemampuan dari dua class dasar berbeda.

#include <iostream>
struct Pencetak { void cetak() const { std::cout << "Cetak\n"; } };
struct Pemindai { void pindai() const { std::cout << "Pindai\n"; } };
struct Multifungsi : Pencetak, Pemindai {};
// Satu class turunan dapat mewarisi dua class dasar.
int main() { Multifungsi m; m.cetak(); m.pindai(); }