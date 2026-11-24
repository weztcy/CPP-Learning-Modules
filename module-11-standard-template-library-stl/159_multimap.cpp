// Tujuan: multimap menyimpan lebih dari satu nilai pada kunci nama yang sama.

#include <iostream>
#include <map>
#include <string>
// multimap dapat menyimpan beberapa nilai untuk kunci yang sama.
int main() { std::multimap<std::string, int> nilai{{"Ani", 80}, {"Ani", 90}}; for (const auto& [nama, angka] : nilai) std::cout << nama << ' ' << angka << '\n'; }