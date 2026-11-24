# Modul 2. Variabel dan Tipe Data

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-02-variabel-dan-tipe-data/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-02-variabel-dan-tipe-data\NAMA.cpp
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

### 11. Deklarasi variabel

- **Kode:** [`11_variable.cpp`](11_variable.cpp).
- **Konsep:** Deklarasi variabel.
- **Cara kerja:** Variabel umur dideklarasikan sebelum diberi nilai lalu nilainya dicetak.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 11_variable](output/11_variable.png)

### 12. Inisialisasi variabel

- **Kode:** [`12_variable_initialization.cpp`](12_variable_initialization.cpp).
- **Konsep:** Inisialisasi variabel.
- **Cara kerja:** Bandingkan inisialisasi = dengan kurung kurawal {} untuk int dan double.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 12_variable_initialization](output/12_variable_initialization.png)

### 13. Tipe data bilangan bulat

- **Kode:** [`13_integer_types.cpp`](13_integer_types.cpp).
- **Konsep:** Tipe data bilangan bulat.
- **Cara kerja:** short, int, long, long long dan unsigned dipakai untuk menampilkan contoh bilangan bulat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 13_integer_types](output/13_integer_types.png)

### 14. `float` dan `double`

- **Kode:** [`14_floating_point.cpp`](14_floating_point.cpp).
- **Konsep:** `float` dan `double`.
- **Cara kerja:** setprecision memperlihatkan perbedaan ketelitian float dan double.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 14_floating_point](output/14_floating_point.png)

### 15. Tipe data `char`

- **Kode:** [`15_char_data_type.cpp`](15_char_data_type.cpp).
- **Konsep:** Tipe data `char`.
- **Cara kerja:** Variabel char menyimpan satu karakter atau escape newline, bukan satu kalimat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 15_char_data_type](output/15_char_data_type.png)

### 16. Tipe data `bool`

- **Kode:** [`16_boolean.cpp`](16_boolean.cpp).
- **Konsep:** Tipe data `bool`.
- **Cara kerja:** bool menyimpan true/false; boolalpha mengubah tampilan dari 1/0 menjadi kata.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 16_boolean](output/16_boolean.png)

### 17. Tipe data `string`

- **Kode:** [`17_string_basic.cpp`](17_string_basic.cpp).
- **Konsep:** Tipe data `string`.
- **Cara kerja:** std::string menyimpan nama dan dapat digabungkan ke output.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 17_string_basic](output/17_string_basic.png)

### 18. Konstanta `const`

- **Kode:** [`18_constant_const.cpp`](18_constant_const.cpp).
- **Konsep:** Konstanta `const`.
- **Cara kerja:** const melindungi pi dari perubahan setelah inisialisasi lalu dipakai menghitung luas.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 18_constant_const](output/18_constant_const.png)

### 19. Konstanta `constexpr`

- **Kode:** [`19_constant_constexpr.cpp`](19_constant_constexpr.cpp).
- **Konsep:** Konstanta `constexpr`.
- **Cara kerja:** constexpr menentukan ukuran array pada waktu kompilasi; sizeof menghitung banyak sel.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 19_constant_constexpr](output/19_constant_constexpr.png)

### 20. Konversi tipe data

- **Kode:** [`20_type_conversion.cpp`](20_type_conversion.cpp).
- **Konsep:** Konversi tipe data.
- **Cara kerja:** Pembagian int dengan literal double mengonversi operand int secara implisit.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 20_type_conversion](output/20_type_conversion.png)

### 21. Type casting

- **Kode:** [`21_type_casting.cpp`](21_type_casting.cpp).
- **Konsep:** Type casting.
- **Cara kerja:** static_cast<double> mengubah pembilang sebelum pembagian agar hasil pecahan tidak hilang.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 21_type_casting](output/21_type_casting.png)

### 22. Inferensi tipe menggunakan `auto`

- **Kode:** [`22_auto_keyword.cpp`](22_auto_keyword.cpp).
- **Konsep:** Inferensi tipe menggunakan `auto`.
- **Cara kerja:** auto menyimpulkan tipe dari literal int dan double; hasil perkalian dicetak.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 22_auto_keyword](output/22_auto_keyword.png)

### 23. Local dan global scope

- **Kode:** [`23_scope_variable.cpp`](23_scope_variable.cpp).
- **Konsep:** Local dan global scope.
- **Cara kerja:** Angka global tersedia di seluruh file; angka lokal hanya di dalam main, diakses berdampingan tanpa shadowing.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 23_scope_variable](output/23_scope_variable.png)

### 24. Batas nilai tipe data

- **Kode:** [`24_numeric_limits.cpp`](24_numeric_limits.cpp).
- **Konsep:** Batas nilai tipe data.
- **Cara kerja:** numeric_limits menunjukkan batas int dan jumlah digit presisi double di platform saat ini.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 24_numeric_limits](output/24_numeric_limits.png)

