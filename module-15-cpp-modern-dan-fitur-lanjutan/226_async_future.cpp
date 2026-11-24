// Tujuan: async meluncurkan perhitungan dan future.get menunggu sekaligus mengambil hasil.

#include <future>
#include <iostream>
// future.get menunggu pekerjaan async dan mengambil nilai hasilnya.
int main() { auto hasil = std::async(std::launch::async, [](int n) { return n * n; }, 6); std::cout << hasil.get() << '\n'; }