// Tujuan: Karakter escape \n, \t, tanda kutip dan backslash membentuk baris, tab, serta karakter khusus.

#include <iostream>

int main() {
    // Escape sequence di dalam string mewakili karakter yang tidak ditulis langsung.
    std::cout << "Baris pertama\nBaris kedua\n";
    std::cout << "Kolom\tNilai\n";
    std::cout << "Kutip: \"Halo\" dan garis miring: \\ \n";
}