// Tujuan: Parameter pack dan fold expression mencetak banyak argumen dalam satu pemanggilan.

#include <iostream>
template <typename... T> void cetak(const T&... nilai) { (std::cout << ... << nilai) << '\n'; }
// Fold expression menerapkan operator << pada semua argumen variadik.
int main() { cetak("Nilai: ", 42, ", lulus: ", true); }