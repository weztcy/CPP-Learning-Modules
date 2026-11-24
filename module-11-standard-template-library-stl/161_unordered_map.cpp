// Tujuan: unordered_map mengambil nilai melalui kunci tanpa menjamin urutan iterasi.

#include <iostream>
#include <string>
#include <unordered_map>
// unordered_map menggunakan hash untuk mencari nilai lewat kunci.
int main() { std::unordered_map<std::string, int> nilai{{"Ani", 90}}; std::cout << "Ani: " << nilai.at("Ani") << '\n'; }