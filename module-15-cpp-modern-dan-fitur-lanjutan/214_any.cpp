// Tujuan: any menyimpan nilai berbagai tipe; any_cast memerlukan tipe yang tepat.

#include <any>
#include <iostream>
#include <string>
// any menyimpan tipe bebas yang harus diketahui lagi saat diambil.
int main() { std::any nilai = 42; std::cout << std::any_cast<int>(nilai) << '\n'; nilai = std::string("C++"); std::cout << std::any_cast<std::string>(nilai) << '\n'; }