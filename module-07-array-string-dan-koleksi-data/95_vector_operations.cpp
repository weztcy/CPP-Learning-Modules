// Tujuan: push_back menambah, erase menghapus awal, size dan back membaca keadaan vector.

#include <iostream>
#include <vector>
int main() {
    // push_back menambah elemen dan operasi lain mengakses atau menghapusnya.
    std::vector<int> angka{1, 2};
    angka.push_back(3);
    angka.erase(angka.begin());
    std::cout << "Ukuran: " << angka.size() << ", terakhir: " << angka.back() << '\n';
}