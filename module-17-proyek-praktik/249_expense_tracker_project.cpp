// Tujuan: Vector menyimpan kategori/jumlah pengeluaran, loop merinci dan menjumlahkannya.

#include <iostream>
#include <string>
#include <vector>
struct Pengeluaran { std::string kategori; long long jumlah; };
int main() {
    // vector menampung transaksi; total dihitung ulang saat daftar diminta.
    std::vector<Pengeluaran> catatan; int perintah;
    // 1 kategori jumlah: catat, 2: lihat total dan rincian, 0: keluar.
    while (std::cin >> perintah && perintah != 0) {
        if (perintah == 1) {
            Pengeluaran baru;
            if (!(std::cin >> baru.kategori >> baru.jumlah) || baru.jumlah <= 0) return 1;
            // Simpan hanya transaksi dengan jumlah positif.
            catatan.push_back(baru);
        } else if (perintah == 2) {
            // Hitung ulang total dari seluruh catatan sambil menampilkan rinciannya.
            long long total = 0;
            for (const auto& item : catatan) { std::cout << item.kategori << ": " << item.jumlah << '\n'; total += item.jumlah; }
            std::cout << "Total: " << total << '\n';
        } else return 1;
    }
}