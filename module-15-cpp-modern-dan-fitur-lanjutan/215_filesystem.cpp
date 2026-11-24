// Tujuan: filesystem membaca direktori kerja dan memeriksa apakah path-nya ada.

#include <filesystem>
#include <iostream>
// filesystem memeriksa dan memanipulasi path sebagai objek, bukan string biasa.
int main() { std::filesystem::path lokasi = std::filesystem::current_path(); std::cout << "Direktori: " << lokasi << '\n'; std::cout << "Ada: " << std::filesystem::exists(lokasi) << '\n'; }