// Tujuan: Daftar adjacency menyimpan tetangga setiap simpul graph tak berarah.

#include <iostream>
#include <vector>
// Setiap indeks menyimpan daftar tetangga simpul graf tersebut.
int main() { std::vector<std::vector<int>> tetangga{{1, 2}, {0, 2}, {0, 1}}; for (size_t i = 0; i < tetangga.size(); ++i) { std::cout << i << ':'; for (int j : tetangga[i]) std::cout << ' ' << j; std::cout << '\n'; } }