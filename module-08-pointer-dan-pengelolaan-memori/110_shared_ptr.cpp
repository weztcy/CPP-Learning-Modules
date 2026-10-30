// Tujuan: shared_ptr berbagi kepemilikan; use_count menampilkan jumlah pemilik aktif.

#include <iostream>
#include <memory>
int main() {
    // Menyalin shared_ptr menambah jumlah pemilik objek yang sama.
    auto pertama = std::make_shared<int>(42);
    auto kedua = pertama;
    std::cout << *kedua << ", pemilik: " << pertama.use_count() << '\n';
}