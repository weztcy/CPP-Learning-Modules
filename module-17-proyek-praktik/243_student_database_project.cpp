// Tujuan: map menyimpan siswa berdasarkan ID dengan operasi tambah, cari, hapus dan daftar.

#include <iostream>
#include <map>
#include <string>
int main() {
    // map menghubungkan ID unik ke nama sehingga pencarian langsung lewat kunci.
    std::map<int, std::string> siswa;
    int perintah;
    // Nol mengakhiri menu; operasi lain memerlukan argumen tambahan.
    while (std::cin >> perintah && perintah != 0) {
        if (perintah == 1) {
            int id; std::string nama;
            if (!(std::cin >> id >> nama)) return 1;
            // emplace.second false berarti kunci ID sudah dipakai.
            if (!siswa.emplace(id, nama).second) std::cout << "ID sudah ada\n";
        } else if (perintah == 2) {
            int id; if (!(std::cin >> id)) return 1;
            // end menandakan ID tidak ditemukan; jangan dereferensikan iterator itu.
            auto it = siswa.find(id);
            std::cout << (it == siswa.end() ? "Tidak ditemukan" : it->second) << '\n';
        } else if (perintah == 3) {
            int id; if (!(std::cin >> id)) return 1;
            // erase mengembalikan banyak elemen yang terhapus (nol atau satu).
            std::cout << (siswa.erase(id) ? "Dihapus" : "Tidak ditemukan") << '\n';
        } else if (perintah == 4) {
            for (const auto& [id, nama] : siswa) std::cout << id << ' ' << nama << '\n';
        } else return 1;
    }
    // Perintah: 1 id nama (tambah), 2 id (cari), 3 id (hapus), 4 (daftar), 0 (selesai).
}