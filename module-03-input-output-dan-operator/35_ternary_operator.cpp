// Tujuan: Ekspresi kondisional memilih teks berdasarkan syarat usia.

#include <iostream>

int main() {
    // Operator ?: memilih salah satu dari dua ekspresi berdasarkan kondisi.
    int umur = 18;
    std::cout << (umur >= 17 ? "Dewasa" : "Anak-anak") << '\n';
}