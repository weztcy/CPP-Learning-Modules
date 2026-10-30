// Tujuan: Variabel tak terpakai sengaja dikomentari; buka komentar dan kompilasi /W4 untuk melihat warning, lalu gunakan variabel untuk mengatasinya.

#include <iostream>

int main() {
    // int tidakDipakai = 10; // /W4: warning variabel lokal tidak dipakai.
    // Kode yang tidak memakai variabel dapat memicu peringatan jika komentar dibuka.
    int dipakai = 10;
    std::cout << "Nilai yang digunakan: " << dipakai << '\n';
}