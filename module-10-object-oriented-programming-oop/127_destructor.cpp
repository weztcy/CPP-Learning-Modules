// Tujuan: Destructor mencetak pesan saat objek meninggalkan blok scope.

#include <iostream>
class Penjaga { public: ~Penjaga() { std::cout << "Destructor dipanggil\n"; } };
// Destructor berjalan saat masa hidup objek berakhir.
int main() { { Penjaga contoh; std::cout << "Objek hidup\n"; } std::cout << "Scope berakhir\n"; }