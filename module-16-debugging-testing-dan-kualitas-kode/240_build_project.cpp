// Tujuan: argc/argv membaca argumen command line dan fallback ke dunia saat tidak ada argumen.

#include <iostream>
#include <string>
int main(int argc, char* argv[]) {
    // Dari Developer Command Prompt: cl /std:c++20 /EHsc module-16-debugging-testing-dan-kualitas-kode\240_build_project.cpp
    // argv menyediakan argumen command line, atau gunakan nilai default.
    std::string nama = argc > 1 ? argv[1] : "dunia";
    std::cout << "Build berhasil, halo " << nama << '\n';
}