// Tujuan: override memastikan tanda tangan method turunan cocok dengan method virtual dasar.

#include <iostream>
struct Dasar { virtual ~Dasar() = default; virtual int hitung() const { return 1; } };
struct Turunan : Dasar { int hitung() const override { return 2; } };
// override menandai method turunan yang menggantikan method virtual dasar.
int main() { Turunan t; std::cout << t.hitung() << '\n'; }