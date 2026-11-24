// Tujuan: Method static dipanggil dari nama class tanpa membuat objek.

#include <iostream>
class Matematika { public: static int kuadrat(int x) { return x * x; } };
// Method static dapat dipanggil lewat nama class tanpa objek.
int main() { std::cout << Matematika::kuadrat(6) << '\n'; }