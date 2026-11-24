// Tujuan: Komentar // dan /*...*/ diabaikan compiler; hanya dua perintah cout yang ditampilkan.

#include <iostream>

int main() {
    // Komentar satu baris tidak dieksekusi.
    // Baris komentar tidak dieksekusi; hanya perintah cout yang menghasilkan keluaran.
    std::cout << "Komentar tidak muncul di output.\n";
    /* Komentar ini dapat
       mencakup beberapa baris. */
    std::cout << "Hanya perintah cout yang ditampilkan.\n";
}