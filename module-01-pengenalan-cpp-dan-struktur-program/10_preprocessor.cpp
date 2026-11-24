// Tujuan: Direktif #include memuat deklarasi, sedangkan #define mengganti PESAN sebelum kompilasi.

#include <iostream> // Header diproses sebelum kompilasi.
#define PESAN "Salam dari preprocessor"

int main() {
    // Preprocessor mengganti makro sebelum compiler memproses kode C++.
    std::cout << PESAN << '\n';
}