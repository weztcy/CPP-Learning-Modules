// Tujuan: queue menerapkan FIFO: elemen pertama yang masuk keluar dahulu.

#include <iostream>
#include <queue>
// queue bersifat FIFO: yang lebih dulu masuk keluar lebih dulu.
int main() { std::queue<int> angka; angka.push(1); angka.push(2); while (!angka.empty()) { std::cout << angka.front() << ' '; angka.pop(); } std::cout << '\n'; }