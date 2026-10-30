// Tujuan: count_if memakai lambda yang menangkap batas lulus dari scope luar.

#include <algorithm>
#include <iostream>
#include <vector>
// Lambda menangkap batas agar count_if dapat memeriksa setiap nilai.
int main() { std::vector<int> nilai{65, 80, 95}; int batas = 75; std::cout << "Lulus: " << std::count_if(nilai.begin(), nilai.end(), [batas](int n) { return n >= batas; }) << '\n'; }