// Tujuan: Nilai dibaca dari jumlah.txt, dinaikkan dan ditulis kembali agar tersimpan antarproses.

#include <fstream>
#include <iostream>
int main() {
    // Simpan penghitung ke file agar nilainya tetap ada setelah program selesai.
    int jumlah = 0;
    // Pada kunjungan pertama file belum ada: jumlah tetap nol.
    { std::ifstream baca("jumlah.txt"); if (baca && !(baca >> jumlah)) return 1; }
    ++jumlah;
    // Tulis nilai baru untuk dipakai saat program dijalankan lagi.
    { std::ofstream tulis("jumlah.txt"); if (!tulis || !(tulis << jumlah << '\n')) return 1; }
    std::cout << "Kunjungan: " << jumlah << '\n'; // Eksekusi berikutnya membaca nilai sebelumnya.
}