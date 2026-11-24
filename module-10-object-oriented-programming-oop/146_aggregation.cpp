// Tujuan: Kelas menyimpan referensi ke Guru yang diciptakan di luar dan harus hidup lebih lama.

#include <iostream>
#include <string>
struct Guru { std::string nama; };
class Kelas {
    const Guru& guru_; // Tidak memiliki guru; guru tetap hidup di luar kelas.
public: explicit Kelas(const Guru& guru) : guru_(guru) {}
    void cetak() const { std::cout << "Guru: " << guru_.nama << '\n'; }
};
// Aggregation meminjam referensi objek lain tanpa menjadi pemiliknya.
int main() { Guru guru{"Ibu Sari"}; Kelas kelas(guru); kelas.cetak(); }