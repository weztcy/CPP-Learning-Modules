// Tujuan: Node memiliki pointer ke belakang dan unique_ptr ke depan agar kepemilikan tidak siklik.

#include <iostream>
#include <memory>
// Link ke depan memiliki node; link ke belakang hanya meminjam alamatnya.
struct Node { int nilai; Node* sebelumnya = nullptr; std::unique_ptr<Node> berikutnya; };
int main() {
    // Node menyimpan hubungan maju dan mundur untuk list dua arah.
    auto awal = std::make_unique<Node>(); awal->nilai = 1;
    awal->berikutnya = std::make_unique<Node>(); awal->berikutnya->nilai = 2;
    // Setel tautan balik ke node pertama tanpa membuat siklus kepemilikan.
    awal->berikutnya->sebelumnya = awal.get();
    // Mulai dari node terakhir dan ikuti pointer sebelumnya sampai nullptr.
    for (Node* p = awal->berikutnya.get(); p; p = p->sebelumnya) std::cout << p->nilai << ' ';
    std::cout << '\n';
}