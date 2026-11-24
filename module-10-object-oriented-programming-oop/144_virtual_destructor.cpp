// Tujuan: unique_ptr<Dasar> menunjuk Turunan; destructor virtual menjalankan pembersihan turunan lalu dasar.

#include <iostream>
#include <memory>
struct Dasar { virtual ~Dasar() { std::cout << "Destructor dasar\n"; } };
struct Turunan : Dasar { ~Turunan() override { std::cout << "Destructor turunan\n"; } };
// Destructor virtual memastikan pembersihan turunan lewat pointer dasar.
int main() { std::unique_ptr<Dasar> objek = std::make_unique<Turunan>(); }