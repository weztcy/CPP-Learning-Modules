// Tujuan: private hanya dapat dibaca method dasar, protected diwariskan, public dapat dipanggil main.

#include <iostream>
class Dasar {
private: int rahasia_ = 10;
protected: int diwariskan_ = 20;
public: int bacaRahasia() const { return rahasia_; }
};
class Turunan : public Dasar { public: int bacaWarisan() const { return diwariskan_; } };
// private hanya tersedia di class sendiri, sedangkan protected diwariskan.
int main() { Turunan x; std::cout << x.bacaRahasia() << ' ' << x.bacaWarisan() << '\n'; }