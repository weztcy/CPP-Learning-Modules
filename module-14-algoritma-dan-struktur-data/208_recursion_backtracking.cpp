// Tujuan: Backtracking memilih dua dari empat angka, mencetak kombinasi lalu menghapus pilihan terakhir.

#include <iostream>
#include <vector>
// sisa == 0 berarti kombinasi lengkap dan dapat dicetak.
// Tambahkan kandidat, telusuri cabangnya, lalu pop_back untuk mencoba kandidat lain.
// Batas atas loop menyisakan cukup angka untuk melengkapi pilihan yang belum terisi.
void kombinasi(int awal, int sisa, std::vector<int>& pilihan) {
    if (sisa == 0) {
        for (int n : pilihan) std::cout << n << ' ';
        std::cout << '\n';
        return;
    }
    for (int n = awal; n <= 4 - sisa + 1; ++n) {
        pilihan.push_back(n);
        kombinasi(n + 1, sisa - 1, pilihan);
        pilihan.pop_back(); // Pulihkan pilihan sebelum mencoba angka berikutnya.
    }
}
// Pilihan ditambah sebelum rekursi dan dicabut saat mundur ke cabang lain.
int main() { std::vector<int> pilihan; kombinasi(1, 2, pilihan); }