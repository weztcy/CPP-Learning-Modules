// Tujuan: Exception runtime_error dilempar dan pesan what ditangkap lewat std::exception.

#include <iostream>
#include <stdexcept>
// throw mengirim kesalahan ke catch untuk ditangani tanpa melanjutkan operasi gagal.
int main() { try { throw std::runtime_error("Ada kesalahan"); } catch (const std::exception& e) { std::cout << e.what() << '\n'; } }