// Tujuan: priority_queue mengeluarkan bilangan terbesar lebih dahulu.

#include <iostream>
#include <queue>
// priority_queue mengambil elemen berprioritas terbesar terlebih dahulu.
int main() { std::priority_queue<int> angka; for (int n : {2, 5, 1}) angka.push(n); while (!angka.empty()) { std::cout << angka.top() << ' '; angka.pop(); } std::cout << '\n'; }