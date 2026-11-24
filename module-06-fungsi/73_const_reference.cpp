// Tujuan: const string& melewatkan string tanpa menyalin dan melarang perubahan di fungsi.

#include <iostream>
#include <string>
void sapa(const std::string& nama) { std::cout << "Halo, " << nama << '\n'; }
// const reference membaca string tanpa menyalin maupun mengubahnya.
int main() { std::string nama = "Dina"; sapa(nama); }