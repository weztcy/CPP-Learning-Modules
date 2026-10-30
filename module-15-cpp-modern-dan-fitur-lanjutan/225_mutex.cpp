// Tujuan: lock_guard mengunci mutex selama increment agar dua thread tidak mengalami data race.

#include <iostream>
#include <mutex>
#include <thread>
// lock_guard melepas mutex otomatis sehingga pembaruan data terlindungi.
int main() { int hitung = 0; std::mutex kunci; auto tugas = [&]() { for (int i = 0; i < 1000; ++i) { std::lock_guard<std::mutex> pengunci(kunci); ++hitung; } }; std::thread a(tugas), b(tugas); a.join(); b.join(); std::cout << hitung << '\n'; }