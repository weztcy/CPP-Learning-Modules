// Tujuan: new int[n] membuat array dinamis, yang harus dibebaskan dengan delete[].

#include <iostream>
int main() {
    // delete[] harus dipakai untuk array yang dialokasikan dengan new[].
    int n = 4;
    int* data = new int[n]{1, 2, 3, 4};
    for (int i = 0; i < n; ++i) std::cout << data[i] << ' ';
    std::cout << '\n';
    delete[] data;
}