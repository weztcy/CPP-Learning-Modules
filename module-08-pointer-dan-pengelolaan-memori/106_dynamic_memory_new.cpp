// Tujuan: new int mengalokasikan nilai; delete membebaskannya setelah dipakai.

#include <iostream>
int main() {
    // new mengalokasikan objek secara dinamis hingga dibebaskan.
    int* nilai = new int{42};
    std::cout << *nilai << '\n';
    delete nilai; // Setiap new harus dipasangkan dengan delete.
}