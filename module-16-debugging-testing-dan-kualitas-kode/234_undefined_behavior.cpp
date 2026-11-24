// Tujuan: Akses vector di luar batas lewat [] adalah UB dan hanya ditulis sebagai komentar; at dipakai dengan aman.

#include <iostream>
#include <vector>
int main() {
    // Gunakan at untuk pemeriksaan rentang; operator [] di luar batas tidak aman.
    std::vector<int> angka{10, 20, 30};
    // angka[3] pada vector berukuran 3 adalah undefined behavior; jangan dijalankan.
    try { std::cout << angka.at(2) << '\n'; }
    catch (const std::out_of_range& e) { std::cerr << e.what() << '\n'; }
}