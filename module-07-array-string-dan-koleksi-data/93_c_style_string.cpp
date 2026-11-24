// Tujuan: Array char diakhiri nul; strlen menghitung karakter sebelum terminator.

#include <cstring>
#include <iostream>
int main() {
    // String gaya C memakai array char yang diakhiri karakter null.
    char teks[]{'H', 'a', 'l', 'o', '\0'};
    std::cout << teks << ", panjang: " << std::strlen(teks) << '\n';
}