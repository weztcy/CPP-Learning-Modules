// Tujuan: Bubble sort membandingkan pasangan bertetangga dan menggeser elemen besar ke akhir.

#include <iostream>
#include <vector>
int main() {
    std::vector<int> a{5, 1, 4, 2};
    // Setelah tiap putaran, elemen terbesar sudah berada di bagian akhir.
    for (size_t i = 0; i < a.size(); ++i)
        for (size_t j = 1; j < a.size() - i; ++j)
            if (a[j - 1] > a[j]) {
                int tmp = a[j]; a[j] = a[j - 1]; a[j - 1] = tmp;
            }
    for (int n : a) std::cout << n << ' ';
    std::cout << '\n';
}