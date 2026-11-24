// Tujuan: Vector menyimpan struct Siswa; loop membaca nama dan nilai dari tiap objek.

#include <iostream>
#include <string>
#include <vector>
struct Siswa { std::string nama; int nilai; };
int main() {
    // vector menyimpan objek; loop membaca anggota setiap objek.
    std::vector<Siswa> siswa{{"Ani", 90}, {"Budi", 80}};
    for (const auto& orang : siswa) std::cout << orang.nama << ": " << orang.nilai << '\n';
}