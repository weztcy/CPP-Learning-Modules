// Tujuan: Selection sort memilih elemen terkecil dari sisa rentang dan menukarnya ke depan.

#include <iostream>
#include <vector>
int main() {
    std::vector<int> a{5, 1, 4, 2};
    // Prefiks sebelum i sudah terurut; cari nilai terkecil dari sisanya.
    for (size_t i = 0; i < a.size(); ++i) {
        size_t min = i;
        for (size_t j = i + 1; j < a.size(); ++j)
            if (a[j] < a[min]) min = j;
        // Pindahkan nilai terkecil ke posisi i.
        int tmp = a[i]; a[i] = a[min]; a[min] = tmp;
    }
    for (int n : a) std::cout << n << ' ';
    std::cout << '\n';
}