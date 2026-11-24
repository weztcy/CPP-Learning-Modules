// Tujuan: map memetakan nama unik ke nilai dan mengiterasi kunci berurutan.

#include <iostream>
#include <map>
#include <string>
// map menghubungkan kunci unik dengan nilai terkait.
int main() { std::map<std::string, int> nilai{{"Ani", 90}}; nilai["Budi"] = 85; for (const auto& [nama, angka] : nilai) std::cout << nama << ' ' << angka << '\n'; }