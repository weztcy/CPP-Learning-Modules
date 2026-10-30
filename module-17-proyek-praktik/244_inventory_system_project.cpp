// Tujuan: map menyimpan barang/stok; ambil menolak jumlah melebihi stok yang ada.

#include <iostream>
#include <map>
#include <string>
struct Barang { std::string nama; int stok; };
int main() {
    // map menyimpan stok menurut ID; ambil hanya jika jumlah tersedia.
    std::map<int, Barang> inventaris;
    int perintah;
    // 1 id nama stok: tambah, 2 id jumlah: ambil, 3: daftar, 0: selesai.
    while (std::cin >> perintah && perintah != 0) {
        if (perintah == 1) {
            int id, stok; std::string nama;
            if (!(std::cin >> id >> nama >> stok) || stok < 0) return 1;
            // Kunci map unik: jangan menimpa stok barang yang sudah terdaftar.
            if (!inventaris.emplace(id, Barang{nama, stok}).second) std::cout << "ID sudah ada\n";
        } else if (perintah == 2) {
            int id, jumlah;
            if (!(std::cin >> id >> jumlah) || jumlah <= 0) return 1;
            auto it = inventaris.find(id);
            // Cek keberadaan barang sebelum mengakses stok dan menguranginya.
            if (it == inventaris.end() || it->second.stok < jumlah) std::cout << "Stok tidak cukup\n";
            else { it->second.stok -= jumlah; std::cout << "Diambil: " << jumlah << '\n'; }
        } else if (perintah == 3) {
            for (const auto& [id, barang] : inventaris) std::cout << id << ' ' << barang.nama << ' ' << barang.stok << '\n';
        } else return 1;
    }
}