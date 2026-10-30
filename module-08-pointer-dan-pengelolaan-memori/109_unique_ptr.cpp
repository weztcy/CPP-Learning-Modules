// Tujuan: make_unique membuat pemilik tunggal; destructor otomatis membebaskan memori.

#include <iostream>
#include <memory>
int main() {
    // unique_ptr menjadi pemilik tunggal dan otomatis membebaskan memori.
    auto nilai = std::make_unique<int>(42);
    std::cout << *nilai << '\n'; // Otomatis dibebaskan saat keluar scope.
}