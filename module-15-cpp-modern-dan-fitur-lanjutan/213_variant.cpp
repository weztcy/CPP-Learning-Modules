// Tujuan: variant menampung int ATAU string; get dan visit mengakses anggota yang aktif.

#include <iostream>
#include <string>
#include <variant>
// variant menyimpan tepat satu dari beberapa tipe yang diizinkan.
int main() { std::variant<int, std::string> data = 42; std::cout << std::get<int>(data) << '\n'; data = "teks"; std::visit([](const auto& nilai) { std::cout << nilai << '\n'; }, data); }