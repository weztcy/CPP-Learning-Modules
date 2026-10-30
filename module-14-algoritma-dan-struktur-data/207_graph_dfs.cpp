// Tujuan: DFS rekursif menelusuri cabang dahulu dan menandai simpul agar tidak berulang.

#include <iostream>
#include <vector>
// Tandai sebelum rekursi agar sisi yang mengarah balik tidak membuat loop tak berujung.
// Setiap tetangga yang belum dikunjungi ditelusuri sampai cabangnya selesai.
void dfs(int n, const std::vector<std::vector<int>>& graf, std::vector<bool>& dilihat) {
    dilihat[n] = true;
    std::cout << n << ' ';
    for (int tetangga : graf[n])
        if (!dilihat[tetangga]) dfs(tetangga, graf, dilihat);
}
// DFS mendalami tetangga yang belum dikunjungi sebelum kembali.
int main() { std::vector<std::vector<int>> graf{{1, 2}, {0, 3}, {0}, {1}}; std::vector<bool> dilihat(graf.size()); dfs(0, graf, dilihat); std::cout << '\n'; }