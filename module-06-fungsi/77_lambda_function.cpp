// Tujuan: Lambda disimpan dalam variabel kali lalu dipanggil seperti fungsi biasa.

#include <iostream>
int main() {
    // Lambda disimpan sebagai variabel dan dapat dipanggil seperti fungsi.
    auto kali = [](int a, int b) { return a * b; };
    std::cout << "3 x 4 = " << kali(3, 4) << '\n';
}