// Tujuan: Pencarian linear dihitung langkahnya; kasus terburuk O(n) untuk n elemen.

#include <iostream>
#include <vector>
// Jumlah langkah naik seiring jumlah elemen pada pencarian linear.
int main() { std::vector<int> data{2, 4, 6, 8, 10}; int target = 10, langkah = 0; bool ketemu = false; for (int n : data) { ++langkah; if (n == target) { ketemu = true; break; } } std::cout << "Linear search O(n): ditemukan=" << ketemu << ", langkah=" << langkah << '\n'; }