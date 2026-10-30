// Tujuan: Vector record menyimpan ID, nama dan nilai; semua record dicetak dengan loop.

#include <iostream>
#include <string>
#include <vector>
struct Catatan { int id; std::string nama; int nilai; };
int main() {
    // Setiap elemen vector memuat satu record id, nama, dan nilai.
    std::vector<Catatan> data{{1, "Ani", 85}, {2, "Budi", 90}};
    for (const auto& item : data) std::cout << item.id << ": " << item.nama << " = " << item.nilai << '\n';
}