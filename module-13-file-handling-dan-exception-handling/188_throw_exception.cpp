// Tujuan: Fungsi bagi melempar invalid_argument sebelum pembagian dengan nol.

#include <iostream>
#include <stdexcept>
double bagi(double a, double b) { if (b == 0) throw std::invalid_argument("Pembagi nol"); return a / b; }
// Exception sengaja dilempar saat prasyarat operasi tidak terpenuhi.
int main() { try { std::cout << bagi(4, 0) << '\n'; } catch (const std::invalid_argument& e) { std::cout << e.what() << '\n'; } }