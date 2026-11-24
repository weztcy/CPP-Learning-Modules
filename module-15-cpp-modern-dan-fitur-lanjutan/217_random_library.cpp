// Tujuan: mt19937 dan distribusi uniform menghasilkan angka dadu 1 sampai 6.

#include <iostream>
#include <random>
// Distribution menentukan rentang hasil dari generator angka acak.
int main() { std::mt19937 mesin(std::random_device{}()); std::uniform_int_distribution<int> dadu(1, 6); std::cout << "Dadu: " << dadu(mesin) << '\n'; }