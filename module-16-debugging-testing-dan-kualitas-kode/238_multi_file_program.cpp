// Tujuan: Header menyatakan fungsi pesan; implementasi cpp lain digabung saat linking dengan main.

#include "238_pesan.h"
#include <iostream>
// File utama memakai fungsi pesan yang diimplementasikan di unit lain.
int main() { std::cout << pesan("C++") << '\n'; }