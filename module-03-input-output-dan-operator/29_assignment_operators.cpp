// Tujuan: Operator += dan *= memperbarui variabel tanpa menulis penugasan lengkap.

#include <iostream>

int main() {
    // Operator penugasan gabungan memakai nilai lama dan menyimpan hasil baru.
    int nilai = 10;
    nilai += 5;
    std::cout << "Setelah +=: " << nilai << '\n';
    nilai *= 2;
    std::cout << "Setelah *=: " << nilai << '\n';
}