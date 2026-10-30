// Tujuan: Pemeriksaan cin dan rentang 0-100 menolak input yang bukan angka atau di luar batas.

#include <iostream>

int main() {
    // Kondisi ini menolak masukan gagal dan nilai di luar rentang 0 hingga 100.
    int nilai;
    std::cout << "Nilai (0-100): ";
    // || membuat program berhenti jika ekstraksi gagal ATAU angka di luar batas.
    if (!(std::cin >> nilai) || nilai < 0 || nilai > 100) {
        std::cerr << "Input tidak valid.\n";
        return 1;
    }
    std::cout << "Nilai diterima: " << nilai << '\n';
}