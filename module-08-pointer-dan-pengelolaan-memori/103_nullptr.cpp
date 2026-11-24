// Tujuan: nullptr menandai pointer kosong; pengecekan dilakukan sebelum dereference.

#include <iostream>
int main() {
    // Periksa pointer terhadap nullptr sebelum mendereferensikannya.
    int* ptr = nullptr;
    if (!ptr) std::cout << "Pointer belum menunjuk objek\n";
    int angka = 7;
    ptr = &angka;
    std::cout << *ptr << '\n';
}