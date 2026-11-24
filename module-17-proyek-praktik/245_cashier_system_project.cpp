// Tujuan: Loop mengalikan harga dan kuantitas lalu membandingkan pembayaran dengan total.

#include <iostream>
int main() {
    // Akumulasi harga kali jumlah menggunakan long long untuk total transaksi.
    int jumlah; long long total = 0;
    std::cout << "Jumlah jenis barang (1-100): ";
    if (!(std::cin >> jumlah) || jumlah < 1 || jumlah > 100) return 1;
    // Setiap iterasi membaca satu jenis barang dan menambah nilai transaksinya.
    for (int i = 0; i < jumlah; ++i) {
        int harga, banyak;
        std::cout << "Harga dan banyak: ";
        if (!(std::cin >> harga >> banyak) || harga < 0 || banyak < 0 || harga > 1000000 || banyak > 100000) return 1;
        // Konversi dilakukan sebelum perkalian agar hasilnya tidak memakai int.
        total += static_cast<long long>(harga) * banyak;
    }
    long long bayar;
    std::cout << "Total: " << total << ", bayar: ";
    // Jangan menghitung kembalian jika pembayaran kurang dari total.
    if (!(std::cin >> bayar) || bayar < total) { std::cerr << "Pembayaran kurang\n"; return 1; }
    std::cout << "Kembalian: " << bayar - total << '\n';
}