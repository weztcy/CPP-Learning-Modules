// Tujuan: CSV sederhana ditulis lalu dipisah dengan koma; tidak mendukung field berisi koma berkutip.

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
int main() {
    // Pisahkan tiap baris CSV berdasarkan koma setelah melewati header.
    // Scope terpisah memastikan file selesai ditulis sebelum dibaca kembali.
    { std::ofstream file("nilai.csv"); if (!file) return 1; file << "nama,nilai\nAni,90\nBudi,80\n"; }
    std::ifstream file("nilai.csv"); if (!file) return 1;
    std::string baris; std::getline(file, baris); // Abaikan header.
    // Ini hanya format CSV sederhana: pemisah koma dalam kutipan belum ditangani.
    while (std::getline(file, baris)) {
        std::istringstream isi(baris); std::string nama, nilai;
        if (std::getline(isi, nama, ',') && std::getline(isi, nilai)) std::cout << nama << ": " << nilai << '\n';
    }
    // Contoh CSV sederhana: belum menangani koma dalam field yang diberi tanda kutip.
}