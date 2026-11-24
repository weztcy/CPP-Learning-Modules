// Tujuan: Insertion sort menyisipkan setiap elemen ke posisi tepat dalam prefiks terurut.

#include <iostream>
#include <vector>
int main() {
    std::vector<int> a{5, 1, 4, 2};
    // Elemen sebelum i sudah terurut; sisipkan a[i] ke dalam bagian itu.
    for (size_t i = 1; i < a.size(); ++i) {
        int nilai = a[i]; size_t j = i;
        // Geser nilai yang lebih besar satu posisi ke kanan.
        while (j > 0 && a[j - 1] > nilai) { a[j] = a[j - 1]; --j; }
        a[j] = nilai;
    }
    for (int n : a) std::cout << n << ' ';
    std::cout << '\n';
}