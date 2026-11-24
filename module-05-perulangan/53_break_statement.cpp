// Tujuan: break menghentikan loop ketika penghitung mencapai lima.

#include <iostream>
int main() {
    // break mengakhiri loop ketika kondisi penghentian tercapai.
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) break;
        std::cout << i << ' ';
    }
    std::cout << '\n';
}