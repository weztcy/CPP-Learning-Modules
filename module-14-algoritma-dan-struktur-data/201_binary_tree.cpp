// Tujuan: Akar memiliki anak kiri dan kanan sebagai unique_ptr; ketiganya ditampilkan.

#include <iostream>
#include <memory>
struct Node { int nilai; std::unique_ptr<Node> kiri, kanan; };
// Node menyimpan cabang kiri dan kanan yang membentuk pohon.
int main() { auto akar = std::make_unique<Node>(); akar->nilai = 1; akar->kiri = std::make_unique<Node>(); akar->kiri->nilai = 2; akar->kanan = std::make_unique<Node>(); akar->kanan->nilai = 3; std::cout << akar->nilai << " -> " << akar->kiri->nilai << ", " << akar->kanan->nilai << '\n'; }