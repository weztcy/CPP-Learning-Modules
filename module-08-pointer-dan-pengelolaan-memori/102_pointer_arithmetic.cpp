// Tujuan: ++ptr menggeser pointer satu elemen int, bukan satu byte.

#include <iostream>
int main() {
    // Penambahan pointer berpindah per elemen, bukan per byte.
    int angka[]{10, 20, 30};
    int* ptr = angka;
    ++ptr; // Maju satu elemen int, bukan satu byte.
    std::cout << *ptr << ' ' << *(ptr + 1) << '\n';
}