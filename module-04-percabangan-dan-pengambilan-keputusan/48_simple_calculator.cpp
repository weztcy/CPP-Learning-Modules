// Tujuan: switch menghitung +, -, *, /; operator asing dan pembagi nol ditolak.

#include <iostream>

int main() {
    // Operasi pembagian harus memeriksa penyebut nol sebelum menghitung hasil.
    double a, b;
    char operasi;
    std::cout << "Masukkan: angka operator angka (misal 8 / 2): ";
    if (!(std::cin >> a >> operasi >> b)) return 1;
    double hasil;
    // Pilih rumus sesuai operator; default menangani karakter yang tidak dikenal.
    switch (operasi) {
        case '+': hasil = a + b; break;
        case '-': hasil = a - b; break;
        case '*': hasil = a * b; break;
        case '/':
            // Cek penyebut sebelum operasi agar tidak menghitung pembagian nol.
            if (b == 0) {
                std::cerr << "Tidak boleh dibagi nol\n";
                return 1;
            }
            hasil = a / b;
            break;
        default:
            std::cerr << "Operator tidak dikenal\n";
            return 1;
    }
    std::cout << "Hasil: " << hasil << '\n';
}