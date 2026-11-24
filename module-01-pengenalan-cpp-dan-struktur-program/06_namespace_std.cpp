// Tujuan: Prefiks std:: memilih cout dan endl tanpa using namespace std.

#include <iostream>

int main() {
    // std:: memilih cout dan endl dari namespace std.
    // Penulisan std:: menyebutkan namespace tempat cout dideklarasikan.
    std::cout << "Namespace std" << std::endl;
}