// Tujuan: numeric_limits menunjukkan batas int dan jumlah digit presisi double di platform saat ini.

#include <iostream>
#include <limits>

int main() {
    // numeric_limits membaca karakteristik tipe dari implementasi compiler saat ini.
    std::cout << "int minimum: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "int maksimum: " << std::numeric_limits<int>::max() << '\n';
    std::cout << "digit presisi double: "
              << std::numeric_limits<double>::digits10 << '\n';
}