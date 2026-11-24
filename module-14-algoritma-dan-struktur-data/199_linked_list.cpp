// Tujuan: Node menyimpan nilai dan unique_ptr ke node berikutnya; traversal mengikuti rantai.

#include <iostream>
#include <memory>
// unique_ptr memiliki node berikutnya sehingga seluruh rantai dibebaskan otomatis.
struct Node { int nilai; std::unique_ptr<Node> berikutnya; };
// Hubungkan node lalu ikuti berikutnya sampai pointer kosong.
int main() { auto awal = std::make_unique<Node>(Node{1, nullptr}); awal->berikutnya = std::make_unique<Node>(Node{2, nullptr}); for (Node* p = awal.get(); p; p = p->berikutnya.get()) std::cout << p->nilai << ' '; std::cout << '\n'; }