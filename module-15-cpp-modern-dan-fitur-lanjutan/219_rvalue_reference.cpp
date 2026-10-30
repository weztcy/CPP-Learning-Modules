// Tujuan: Overload const string& menerima lvalue, overload string&& menerima objek sementara.

#include <iostream>
#include <string>
void proses(const std::string&) { std::cout << "lvalue\n"; }
void proses(std::string&&) { std::cout << "rvalue\n"; }
// Tipe referensi argumen menentukan overload lvalue atau rvalue.
int main() { std::string teks = "halo"; proses(teks); proses(std::string("baru")); }