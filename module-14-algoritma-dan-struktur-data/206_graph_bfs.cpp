// Tujuan: BFS memakai queue dan penanda visited untuk menelusuri simpul per lapisan.

#include <iostream>
#include <queue>
#include <vector>
// Queue memproses simpul sesuai urutan ditemukan agar penelusuran per lapisan.
int main() {
    // graf[i] berisi tetangga simpul i; dilihat mencegah siklus diproses berulang.
    std::vector<std::vector<int>> graf{{1, 2}, {0, 3}, {0}, {1}};
    std::vector<bool> dilihat(graf.size());
    std::queue<int> antrean;
    antrean.push(0); dilihat[0] = true;
    // Queue FIFO memastikan simpul berjarak lebih dekat diproses lebih dulu.
    while (!antrean.empty()) {
        int n = antrean.front(); antrean.pop();
        std::cout << n << ' ';
        // Tandai saat masuk antrean agar tidak dimasukkan dua kali.
        for (int tetangga : graf[n])
            if (!dilihat[tetangga]) { dilihat[tetangga] = true; antrean.push(tetangga); }
    }
    std::cout << '\n';
}