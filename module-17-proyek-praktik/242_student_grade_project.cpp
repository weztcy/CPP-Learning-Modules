// Tujuan: Vector menyimpan pasangan nama/nilai dan menghitung status lulus serta rata-rata.

#include <iostream>
#include <string>
#include <vector>
struct Siswa { std::string nama; int nilai; };
int main() {
    // Setiap nilai disimpan lalu dipakai untuk menentukan kelulusan dan rata-rata.
    int banyak; std::cout << "Jumlah siswa (1-100): ";
    if (!(std::cin >> banyak) || banyak < 1 || banyak > 100) return 1;
    std::vector<Siswa> siswa; double jumlah = 0;
    // Masukan di luar 0-100 dihentikan sebelum masuk ke vector dan total.
    for (int i = 0; i < banyak; ++i) {
        Siswa s;
        std::cout << "Nama dan nilai: ";
        if (!(std::cin >> s.nama >> s.nilai) || s.nilai < 0 || s.nilai > 100) return 1;
        jumlah += s.nilai; siswa.push_back(s);
    }
    // Batas kelulusan 75; jumlah bertipe double agar rata-rata tidak terpotong.
    for (const auto& s : siswa) std::cout << s.nama << ": " << s.nilai << (s.nilai >= 75 ? " (lulus)" : " (belum lulus)") << '\n';
    std::cout << "Rata-rata: " << jumlah / banyak << '\n';
}