// Tujuan: Bandingkan inisialisasi = dengan kurung kurawal {} untuk int dan double.

#include <iostream>

int main() {
    // Inisialisasi dengan kurung kurawal juga menolak penyempitan tipe yang berbahaya.
    int jumlah = 3;
    double harga{12.5};
    std::cout << jumlah << " barang, harga satuan " << harga << '\n';
}