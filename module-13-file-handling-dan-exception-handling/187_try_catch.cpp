// Tujuan: stoi pada teks nonangka melempar invalid_argument yang ditangkap secara spesifik.

#include <iostream>
#include <stdexcept>
#include <string>
// Blok try memuat operasi berisiko; catch menerima exception yang sesuai.
int main() { try { std::cout << std::stoi("bukan angka") << '\n'; } catch (const std::invalid_argument& e) { std::cout << "Konversi gagal: " << e.what() << '\n'; } }