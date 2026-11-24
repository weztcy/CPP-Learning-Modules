// Tujuan: Variabel char menyimpan satu karakter atau escape newline, bukan satu kalimat.

#include <iostream>

int main() {
    // char menyimpan satu karakter; literal karakter ditulis dengan petik tunggal.
    char huruf = 'A';
    char barisBaru = '\n';
    std::cout << "Huruf: " << huruf << barisBaru;
}