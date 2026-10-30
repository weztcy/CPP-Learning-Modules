// Tujuan: Class rekening membatasi setor/tarik dan menolak penarikan melampaui saldo.

#include <iostream>
class Rekening {
    // Saldo private hanya dapat diubah melalui method yang memvalidasi jumlah.
    long long saldo_ = 0;
public:
    // Setoran harus positif sebelum ditambahkan ke saldo.
    bool setor(long long n) { if (n <= 0) return false; saldo_ += n; return true; }
    // Penarikan tidak boleh negatif/nol ataupun melampaui dana tersedia.
    bool tarik(long long n) { if (n <= 0 || n > saldo_) return false; saldo_ -= n; return true; }
    long long saldo() const { return saldo_; }
};
int main() {
    // Method rekening menolak angka tak valid serta penarikan melebihi saldo.
    Rekening rekening; int perintah;
    // 1 jumlah: setor, 2 jumlah: tarik, 3: lihat saldo, 0: keluar.
    while (std::cin >> perintah && perintah != 0) {
        if (perintah == 1 || perintah == 2) {
            long long jumlah; if (!(std::cin >> jumlah)) return 1;
            // Dua operasi berbagi masukan yang sama, tetapi memakai method berbeda.
            bool sukses = perintah == 1 ? rekening.setor(jumlah) : rekening.tarik(jumlah);
            std::cout << (sukses ? "Berhasil" : "Ditolak") << '\n';
        } else if (perintah == 3) std::cout << "Saldo: " << rekening.saldo() << '\n';
        else return 1;
    }
}