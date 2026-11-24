// Tujuan: weak_ptr mengamati shared_ptr tanpa menambah pemilik; lock aman saat hidup, expired setelah habis.

#include <iostream>
#include <memory>
int main() {
    // weak_ptr perlu di-lock untuk mengakses objek hanya jika masih hidup.
    std::weak_ptr<int> pengamat;
    {
        auto pemilik = std::make_shared<int>(42);
        pengamat = pemilik;
        if (auto akses = pengamat.lock()) std::cout << *akses << '\n';
    }
    std::cout << "Kedaluwarsa: " << std::boolalpha << pengamat.expired() << '\n';
}