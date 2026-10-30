// Tujuan: Angka acak 1-10 ditantang dalam lima giliran; pesan membandingkan tebakan dengan target.

#include <iostream>
#include <random>
int main() {
    // Bandingkan tebakan dengan target dan berhenti setelah lima giliran.
    std::mt19937 mesin(std::random_device{}());
    // Distribusi membatasi target acak ke interval inklusif 1 sampai 10.
    int target = std::uniform_int_distribution<int>(1, 10)(mesin);
    std::cout << "Tebak angka 1-10, 5 kesempatan.\n";
    for (int giliran = 1; giliran <= 5; ++giliran) {
        int tebakan;
        std::cout << "Tebakan " << giliran << ": ";
        // Input yang bukan angka atau di luar rentang langsung ditolak.
        if (!(std::cin >> tebakan) || tebakan < 1 || tebakan > 10) return 1;
        // Tebakan benar mengakhiri permainan tanpa menghabiskan giliran tersisa.
        if (tebakan == target) { std::cout << "Menang!\n"; return 0; }
        std::cout << (tebakan < target ? "Terlalu kecil\n" : "Terlalu besar\n");
    }
    std::cout << "Kalah! Jawaban: " << target << '\n';
}