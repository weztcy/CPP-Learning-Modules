// Tujuan: stack menerapkan LIFO: elemen terakhir yang dimasukkan keluar dahulu.

#include <iostream>
#include <stack>
// stack bersifat LIFO: yang terakhir dimasukkan keluar lebih dulu.
int main() { std::stack<int> angka; angka.push(1); angka.push(2); while (!angka.empty()) { std::cout << angka.top() << ' '; angka.pop(); } std::cout << '\n'; }