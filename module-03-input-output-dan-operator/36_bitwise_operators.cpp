// Tujuan: Operasi AND, OR, XOR dan pergeseran bit diterapkan pada dua bilangan unsigned.

#include <iostream>

int main() {
    // Operator bitwise memproses tiap bit, bukan nilai logika bool.
    unsigned int a = 6, b = 3; // 110 dan 011 dalam biner.
    std::cout << "AND: " << (a & b) << ", OR: " << (a | b)
              << ", XOR: " << (a ^ b) << ", geser kiri: " << (a << 1) << '\n';
}