// Tujuan: Operator &&, || dan ! menggabungkan kondisi tiket serta usia.

#include <iostream>

int main() {
    // && butuh kedua syarat benar, || cukup satu, dan ! membalik nilai logika.
    bool punyaTiket = true, cukupUmur = false;
    std::cout << std::boolalpha << "Boleh masuk: " << (punyaTiket && cukupUmur)
              << ", salah satu terpenuhi: " << (punyaTiket || cukupUmur)
              << ", tidak punya tiket: " << !punyaTiket << '\n';
}