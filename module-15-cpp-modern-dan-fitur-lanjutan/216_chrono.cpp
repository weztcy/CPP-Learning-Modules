// Tujuan: steady_clock mengukur durasi loop; angka nanodetik dapat berubah tiap run.

#include <chrono>
#include <iostream>
// chrono menghitung durasi antara dua titik waktu.
int main() { using namespace std::chrono; auto awal = steady_clock::now(); int jumlah = 0; for (int i = 0; i < 1000; ++i) jumlah += i; auto durasi = duration_cast<nanoseconds>(steady_clock::now() - awal); std::cout << "Jumlah: " << jumlah << ", durasi (ns): " << durasi.count() << '\n'; }