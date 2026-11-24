// Tujuan: angka++ mengembalikan nilai sebelum naik; --angka menurunkan sebelum dibaca.

#include <iostream>

int main() {
    // Post-increment membaca nilai lama; pre-decrement mengubahnya lebih dulu.
    int angka = 5;
    std::cout << "Post-increment: " << angka++ << ", sesudah: " << angka << '\n';
    std::cout << "Pre-decrement: " << --angka << '\n';
}