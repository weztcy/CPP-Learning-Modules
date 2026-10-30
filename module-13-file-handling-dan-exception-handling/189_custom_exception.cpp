// Tujuan: Exception kustom mewarisi std::exception dan mengganti what untuk pesan domain.

#include <exception>
#include <iostream>
struct SaldoTidakCukup : std::exception { const char* what() const noexcept override { return "Saldo tidak cukup"; } };
// Tipe exception khusus menyampaikan jenis kesalahan secara lebih spesifik.
int main() { try { throw SaldoTidakCukup{}; } catch (const SaldoTidakCukup& e) { std::cout << e.what() << '\n'; } }