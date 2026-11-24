// Tujuan: Loop mencetak i dan jumlah setiap langkah agar debugger/breakpoint bisa membandingkan state.

#include <iostream>
int main() {
    // Log tiap iterasi memperlihatkan perubahan state untuk membantu debugging.
    int jumlah = 0;
    for (int i = 1; i <= 3; ++i) {
        jumlah += i; // Letakkan breakpoint di sini dan amati i serta jumlah.
        std::cout << "i=" << i << ", jumlah=" << jumlah << '\n';
    }
}