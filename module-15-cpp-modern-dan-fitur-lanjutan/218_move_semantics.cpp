// Tujuan: std::move mengizinkan string dipindahkan; isi asal setelah pemindahan tidak diasumsikan.

#include <iostream>
#include <string>
#include <utility>
// std::move memungkinkan pemindahan; jangan berasumsi isi sumber sesudahnya.
int main() { std::string asal = "Data besar"; std::string tujuan = std::move(asal); std::cout << "Penerima: " << tujuan << '\n'; /* asal valid tetapi isinya tidak ditentukan */ }