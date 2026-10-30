// Tujuan: if/else memilih tepat satu cabang berdasarkan suhu.

#include <iostream>

int main() {
    // Cabang else digunakan bila syarat if bernilai salah.
    int suhu = 20;
    if (suhu > 30) {
        std::cout << "Panas\n";
    } else {
        std::cout << "Tidak panas\n";
    }
}