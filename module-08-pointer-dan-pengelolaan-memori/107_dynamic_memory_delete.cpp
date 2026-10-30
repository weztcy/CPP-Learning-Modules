// Tujuan: delete melepas alokasi; pointer diatur nullptr untuk mencegah pemakaian kembali.

#include <iostream>
int main() {
    // delete melepas memori dari new supaya tidak bocor.
    int* angka = new int{10};
    std::cout << "Sebelum delete: " << *angka << '\n';
    delete angka;
    angka = nullptr; // Jangan dereference pointer setelah delete.
    std::cout << "Sudah dilepas: " << (angka == nullptr) << '\n';
}