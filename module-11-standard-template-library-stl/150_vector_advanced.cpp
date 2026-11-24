// Tujuan: reserve mengatur kapasitas, insert menyisipkan tengah, emplace_back menambah akhir.

#include <iostream>
#include <vector>
int main() {
    // vector dapat bertambah tanpa menetapkan ukuran array di awal.
    std::vector<int> v{1, 3};
    // reserve menyiapkan memori, tetapi tidak menambah jumlah elemen (size).
    v.reserve(10);
    // insert menyisipkan 2 di tengah; emplace_back menambahkan 4 di akhir.
    v.insert(v.begin() + 1, 2);
    v.emplace_back(4);
    std::cout << "Size: " << v.size() << ", capacity >= 10: " << (v.capacity() >= 10) << '\n';
    for (int x : v) std::cout << x << ' ';
    std::cout << '\n';
}