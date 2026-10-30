// Tujuan: unordered_map menjadi hash table sederhana untuk stok berdasarkan nama barang.

#include <iostream>
#include <string>
#include <unordered_map>
// unordered_map menyediakan tabel hash dengan akses menurut kunci.
int main() { std::unordered_map<std::string, int> stok{{"buku", 5}}; stok["pena"] = 3; std::cout << "buku: " << stok.at("buku") << ", ada pena: " << stok.contains("pena") << '\n'; }