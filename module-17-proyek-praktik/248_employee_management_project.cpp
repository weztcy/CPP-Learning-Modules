// Tujuan: map menyimpan pegawai dan gaji, lalu mendukung tambah, ubah, hapus dan daftar.

#include <iostream>
#include <map>
#include <string>
struct Pegawai { std::string nama; long long gaji; };
int main() {
    // Cari ID sebelum memperbarui gaji agar tidak membuat pegawai baru.
    std::map<int, Pegawai> pegawai;
    int perintah;
    // 1 id nama gaji: tambah, 2 id gaji: ubah, 3 id: hapus, 4: daftar, 0: keluar.
    while (std::cin >> perintah && perintah != 0) {
        int id; std::string nama; long long gaji;
        if (perintah == 1) {
            if (!(std::cin >> id >> nama >> gaji) || gaji < 0) return 1;
            if (!pegawai.emplace(id, Pegawai{nama, gaji}).second) std::cout << "ID sudah ada\n";
        } else if (perintah == 2) {
            if (!(std::cin >> id >> gaji) || gaji < 0) return 1;
            // find tidak membuat entri baru ketika ID yang diminta tidak ada.
            auto it = pegawai.find(id);
            if (it != pegawai.end()) it->second.gaji = gaji;
            else std::cout << "Tidak ditemukan\n";
        } else if (perintah == 3) {
            if (!(std::cin >> id)) return 1;
            // Banyak entri yang dihapus menentukan pesan hasil operasi.
            std::cout << (pegawai.erase(id) ? "Dihapus" : "Tidak ditemukan") << '\n';
        } else if (perintah == 4) {
            for (const auto& [nomor, orang] : pegawai) std::cout << nomor << ' ' << orang.nama << ' ' << orang.gaji << '\n';
        } else return 1;
    }
}