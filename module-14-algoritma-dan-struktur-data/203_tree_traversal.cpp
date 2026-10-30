// Tujuan: Tiga fungsi rekursif mengunjungi pohon dalam urutan preorder, inorder, postorder.

#include <iostream>
struct Node { int nilai; const Node* kiri; const Node* kanan; };
void preorder(const Node* n) { if (n) { std::cout << n->nilai << ' '; preorder(n->kiri); preorder(n->kanan); } }
void inorder(const Node* n) { if (n) { inorder(n->kiri); std::cout << n->nilai << ' '; inorder(n->kanan); } }
void postorder(const Node* n) { if (n) { postorder(n->kiri); postorder(n->kanan); std::cout << n->nilai << ' '; } }
// Preorder, inorder, dan postorder membedakan kapan node dicetak.
int main() { Node kiri{2, nullptr, nullptr}, kanan{3, nullptr, nullptr}, akar{1, &kiri, &kanan}; preorder(&akar); std::cout << '\n'; inorder(&akar); std::cout << '\n'; postorder(&akar); std::cout << '\n'; }