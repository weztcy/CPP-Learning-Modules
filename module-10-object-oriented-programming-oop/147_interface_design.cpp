// Tujuan: Fungsi tulis menggunakan interface Penyimpan tanpa bergantung pada implementasi konsol.

#include <iostream>
#include <string>
struct Penyimpan { virtual ~Penyimpan() = default; virtual void simpan(const std::string& teks) = 0; };
class PenyimpanKonsol : public Penyimpan {
public: void simpan(const std::string& teks) override { std::cout << "Disimpan: " << teks << '\n'; }
};
void tulis(Penyimpan& tujuan) { tujuan.simpan("catatan"); }
// Interface mendefinisikan operasi yang wajib disediakan implementasi.
int main() { PenyimpanKonsol tujuan; tulis(tujuan); }