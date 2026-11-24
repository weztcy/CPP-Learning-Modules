// Tujuan: switch memilih operasi aritmetika pada input; pembagi nol/operator asing menghasilkan error.

#include <iostream>
int main() {
    // switch menentukan rumus; pembagian nol ditolak sebelum operator /.
    double a, b; char op;
    std::cout << "Kalkulator (contoh: 10 + 2): ";
    if (!(std::cin >> a >> op >> b)) return 1;
    double hasil;
    // Setiap case menetapkan hasil; kesalahan keluar sebelum hasil dicetak.
    switch (op) {
        case '+': hasil = a + b; break;
        case '-': hasil = a - b; break;
        case '*': hasil = a * b; break;
        // Pembagian dengan nol tidak mempunyai hasil yang valid.
        case '/': if (b == 0) { std::cerr << "Pembagi nol\n"; return 1; } hasil = a / b; break;
        default: std::cerr << "Operator tidak dikenal\n"; return 1;
    }
    std::cout << "Hasil: " << hasil << '\n';
}