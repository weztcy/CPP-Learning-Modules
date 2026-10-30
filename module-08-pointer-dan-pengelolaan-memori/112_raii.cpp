// Tujuan: Constructor memperoleh resource dan destructor melepasnya saat scope berakhir (RAII).

#include <iostream>
struct Penjaga {
    Penjaga() { std::cout << "Resource diperoleh\n"; }
    ~Penjaga() { std::cout << "Resource dilepas otomatis\n"; }
};
// Destructor dipanggil otomatis saat penjaga keluar dari scope.
int main() { Penjaga penjaga; std::cout << "Resource sedang dipakai\n"; }