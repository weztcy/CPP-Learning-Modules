# Modul 15. C++ Modern dan Fitur Lanjutan

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-15-cpp-modern-dan-fitur-lanjutan/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-15-cpp-modern-dan-fitur-lanjutan\NAMA.cpp
"%TEMP%\latihan.exe"
```

Untuk contoh yang membaca input, ketik data setelah program dijalankan;
pada input contoh, tanda `|` berarti tekan Enter sebelum data berikutnya.
Jika program menulis file, jalankan di folder latihan tersendiri supaya data
tidak bercampur. Gambar di `output/` adalah **render output proses yang
benar-benar dijalankan**, bukan screenshot terminal; nilai acak, alamat dan
durasi bisa berubah. Jalankan `python validate.py` dari akar proyek
untuk build dan uji seluruh materi serta memperbarui gambar output.

## Materi dan hasil eksekusi

### 211. Structured bindings C++17

- **Kode:** [`211_structured_bindings.cpp`](211_structured_bindings.cpp).
- **Konsep:** Structured bindings C++17.
- **Cara kerja:** Structured binding memecah pair menjadi variabel id dan nama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 211_structured_bindings](output/211_structured_bindings.png)

### 212. `std::optional`

- **Kode:** [`212_optional.cpp`](212_optional.cpp).
- **Konsep:** `std::optional`.
- **Cara kerja:** optional mengembalikan hasil bagi atau nullopt bila pembagi nol.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 212_optional](output/212_optional.png)

### 213. `std::variant`

- **Kode:** [`213_variant.cpp`](213_variant.cpp).
- **Konsep:** `std::variant`.
- **Cara kerja:** variant menampung int ATAU string; get dan visit mengakses anggota yang aktif.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 213_variant](output/213_variant.png)

### 214. `std::any`

- **Kode:** [`214_any.cpp`](214_any.cpp).
- **Konsep:** `std::any`.
- **Cara kerja:** any menyimpan nilai berbagai tipe; any_cast memerlukan tipe yang tepat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 214_any](output/214_any.png)

### 215. `std::filesystem`

- **Kode:** [`215_filesystem.cpp`](215_filesystem.cpp).
- **Konsep:** `std::filesystem`.
- **Cara kerja:** filesystem membaca direktori kerja dan memeriksa apakah path-nya ada.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 215_filesystem](output/215_filesystem.png)

### 216. Pengelolaan waktu dengan `std::chrono`

- **Kode:** [`216_chrono.cpp`](216_chrono.cpp).
- **Konsep:** Pengelolaan waktu dengan `std::chrono`.
- **Cara kerja:** steady_clock mengukur durasi loop; angka nanodetik dapat berubah tiap run.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 216_chrono](output/216_chrono.png)

### 217. Pustaka bilangan acak

- **Kode:** [`217_random_library.cpp`](217_random_library.cpp).
- **Konsep:** Pustaka bilangan acak.
- **Cara kerja:** mt19937 dan distribusi uniform menghasilkan angka dadu 1 sampai 6.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 217_random_library](output/217_random_library.png)

### 218. Move semantics

- **Kode:** [`218_move_semantics.cpp`](218_move_semantics.cpp).
- **Konsep:** Move semantics.
- **Cara kerja:** std::move mengizinkan string dipindahkan; isi asal setelah pemindahan tidak diasumsikan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 218_move_semantics](output/218_move_semantics.png)

### 219. Rvalue reference

- **Kode:** [`219_rvalue_reference.cpp`](219_rvalue_reference.cpp).
- **Konsep:** Rvalue reference.
- **Cara kerja:** Overload const string& menerima lvalue, overload string&& menerima objek sementara.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 219_rvalue_reference](output/219_rvalue_reference.png)

### 220. Perfect forwarding

- **Kode:** [`220_perfect_forwarding.cpp`](220_perfect_forwarding.cpp).
- **Konsep:** Perfect forwarding.
- **Cara kerja:** forward menjaga kategori lvalue/rvalue ketika argumen template diteruskan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 220_perfect_forwarding](output/220_perfect_forwarding.png)

### 221. Copy constructor

- **Kode:** [`221_copy_constructor.cpp`](221_copy_constructor.cpp).
- **Konsep:** Copy constructor.
- **Cara kerja:** Copy constructor membuat salinan nilai mandiri; perubahan pada salinan tidak mengubah asal.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 221_copy_constructor](output/221_copy_constructor.png)

### 222. Move constructor

- **Kode:** [`222_move_constructor.cpp`](222_move_constructor.cpp).
- **Konsep:** Move constructor.
- **Cara kerja:** Move constructor memindah unique_ptr sehingga kepemilikan hanya ada pada tujuan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 222_move_constructor](output/222_move_constructor.png)

### 223. Rule of Three, Five, dan Zero

- **Kode:** [`223_rule_of_three_five_zero.cpp`](223_rule_of_three_five_zero.cpp).
- **Konsep:** Rule of Three, Five, dan Zero.
- **Cara kerja:** Tiga mengelola raw pointer dengan destructor/copy; Lima menambah move; Nol memakai tipe standard library.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 223_rule_of_three_five_zero](output/223_rule_of_three_five_zero.png)

### 224. Multithreading dasar

- **Kode:** [`224_thread_basic.cpp`](224_thread_basic.cpp).
- **Konsep:** Multithreading dasar.
- **Cara kerja:** std::thread menjalankan tugas, join menunggu selesai sebelum hasil dibaca.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 224_thread_basic](output/224_thread_basic.png)

### 225. Sinkronisasi dengan mutex

- **Kode:** [`225_mutex.cpp`](225_mutex.cpp).
- **Konsep:** Sinkronisasi dengan mutex.
- **Cara kerja:** lock_guard mengunci mutex selama increment agar dua thread tidak mengalami data race.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 225_mutex](output/225_mutex.png)

### 226. `std::async` dan `std::future`

- **Kode:** [`226_async_future.cpp`](226_async_future.cpp).
- **Konsep:** `std::async` dan `std::future`.
- **Cara kerja:** async meluncurkan perhitungan dan future.get menunggu sekaligus mengambil hasil.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 226_async_future](output/226_async_future.png)

### 227. Ranges C++20

- **Kode:** [`227_cpp20_ranges.cpp`](227_cpp20_ranges.cpp).
- **Konsep:** Ranges C++20.
- **Cara kerja:** Views::filter memilih elemen genap lalu transform mengkuadratkannya secara lazy.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 227_cpp20_ranges](output/227_cpp20_ranges.png)

### 228. Pengenalan coroutines

- **Kode:** [`228_coroutines_intro.cpp`](228_coroutines_intro.cpp).
- **Konsep:** Pengenalan coroutines.
- **Cara kerja:** co_yield menangguhkan coroutine; handle dilanjutkan, dibaca, lalu dihancurkan RAII.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 228_coroutines_intro](output/228_coroutines_intro.png)

