// Tujuan: Insert meletakkan angka kecil di kiri, besar di kanan; pencarian mengikuti aturan itu.

#include <iostream>
#include <memory>
struct Node { int nilai; std::unique_ptr<Node> kiri, kanan; explicit Node(int n) : nilai(n) {} };
// Slot kosong menjadi node baru; nilai duplikat diabaikan.
void sisip(std::unique_ptr<Node>& akar, int n) {
    if (!akar) akar = std::make_unique<Node>(n);
    else if (n < akar->nilai) sisip(akar->kiri, n);
    else if (n > akar->nilai) sisip(akar->kanan, n);
}
// Arah pencarian dipilih dengan membandingkan target terhadap node saat ini.
bool ada(const Node* akar, int n) {
    while (akar) {
        if (n == akar->nilai) return true;
        akar = n < akar->nilai ? akar->kiri.get() : akar->kanan.get();
    }
    return false;
}
// Nilai lebih kecil masuk kiri dan lebih besar masuk kanan untuk pencarian.
int main() { std::unique_ptr<Node> akar; for (int n : {5, 3, 7, 4}) sisip(akar, n); std::cout << std::boolalpha << ada(akar.get(), 4) << ' ' << ada(akar.get(), 9) << '\n'; }