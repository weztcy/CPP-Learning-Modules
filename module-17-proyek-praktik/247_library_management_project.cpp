// Tujuan: map menyimpan buku dan status pinjam; operasi pinjam/kembali memeriksa status dahulu.

#include <iostream>
#include <map>
#include <string>
struct Buku { std::string judul; bool dipinjam = false; };
int main() {
    // Status dipinjam diperiksa sebelum diubah agar operasi pinjam/kembali sah.
    std::map<int, Buku> buku;
    int perintah;
    // 1 id judul: tambah, 2 id: pinjam, 3 id: kembalikan, 4: daftar, 0: keluar.
    while (std::cin >> perintah && perintah != 0) {
        if (perintah == 1) {
            int id; std::string judul; if (!(std::cin >> id >> judul)) return 1;
            if (!buku.emplace(id, Buku{judul}).second) std::cout << "ID sudah ada\n";
        } else if (perintah == 2 || perintah == 3) {
            int id; if (!(std::cin >> id)) return 1;
            auto it = buku.find(id);
            // Buku harus ada; pinjam hanya buku tersedia, kembali hanya buku dipinjam.
            if (it == buku.end() || it->second.dipinjam != (perintah == 3)) std::cout << "Tidak tersedia\n";
            else { it->second.dipinjam = perintah == 2; std::cout << "Berhasil\n"; } // 2: pinjam; 3: kembalikan.
        } else if (perintah == 4) {
            for (const auto& [id, item] : buku) std::cout << id << ' ' << item.judul << ' ' << (item.dipinjam ? "dipinjam" : "tersedia") << '\n';
        } else return 1;
    }
}