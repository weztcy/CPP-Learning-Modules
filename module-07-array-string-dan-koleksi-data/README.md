# Modul 7. Array, String, dan Koleksi Data

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-07-array-string-dan-koleksi-data/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-07-array-string-dan-koleksi-data\NAMA.cpp
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

### 79. Array satu dimensi

- **Kode:** [`79_array_basic.cpp`](79_array_basic.cpp).
- **Konsep:** Array satu dimensi.
- **Cara kerja:** Array int berukuran tetap diakses melalui indeks nol dan dua.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 79_array_basic](output/79_array_basic.png)

### 80. Input elemen array

- **Kode:** [`80_array_input.cpp`](80_array_input.cpp).
- **Konsep:** Input elemen array.
- **Cara kerja:** Loop membaca tepat tiga elemen ke array, lalu loop kedua mencetaknya.
- **Input contoh:** `1 2 3` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 80_array_input](output/80_array_input.png)

### 81. Iterasi array

- **Kode:** [`81_array_iteration.cpp`](81_array_iteration.cpp).
- **Konsep:** Iterasi array.
- **Cara kerja:** Range-based for mengunjungi setiap elemen array tanpa indeks eksplisit.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 81_array_iteration](output/81_array_iteration.png)

### 82. Jumlah dan rata-rata array

- **Kode:** [`82_array_sum_average.cpp`](82_array_sum_average.cpp).
- **Konsep:** Jumlah dan rata-rata array.
- **Cara kerja:** Loop menjumlah empat elemen; cast ke double menjaga rata-rata pecahan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 82_array_sum_average](output/82_array_sum_average.png)

### 83. Nilai minimum dan maksimum

- **Kode:** [`83_array_min_max.cpp`](83_array_min_max.cpp).
- **Konsep:** Nilai minimum dan maksimum.
- **Cara kerja:** Minimum dan maksimum diperbarui saat setiap elemen dibandingkan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 83_array_min_max](output/83_array_min_max.png)

### 84. Pencarian elemen array

- **Kode:** [`84_array_search.cpp`](84_array_search.cpp).
- **Konsep:** Pencarian elemen array.
- **Cara kerja:** Linear scan mengembalikan indeks pertama yang cocok, atau -1 jika tidak ditemukan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 84_array_search](output/84_array_search.png)

### 85. Pengurutan array

- **Kode:** [`85_array_sorting.cpp`](85_array_sorting.cpp).
- **Konsep:** Pengurutan array.
- **Cara kerja:** std::sort mengurutkan rentang array dan loop menampilkan hasilnya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 85_array_sorting](output/85_array_sorting.png)

### 86. Array multidimensi

- **Kode:** [`86_multidimensional_array.cpp`](86_multidimensional_array.cpp).
- **Konsep:** Array multidimensi.
- **Cara kerja:** Array dua dimensi berisi dua baris; dua loop menampilkan tiap sel.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 86_multidimensional_array](output/86_multidimensional_array.png)

### 87. Penjumlahan matriks

- **Kode:** [`87_matrix_addition.cpp`](87_matrix_addition.cpp).
- **Konsep:** Penjumlahan matriks.
- **Cara kerja:** Setiap sel hasil diisi dengan jumlah dua sel pada indeks baris/kolom yang sama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 87_matrix_addition](output/87_matrix_addition.png)

### 88. Perkalian matriks

- **Kode:** [`88_matrix_multiplication.cpp`](88_matrix_multiplication.cpp).
- **Konsep:** Perkalian matriks.
- **Cara kerja:** Tiga loop mengalikan baris matriks kiri dengan kolom matriks kanan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 88_matrix_multiplication](output/88_matrix_multiplication.png)

### 89. Operasi string

- **Kode:** [`89_string_operations.cpp`](89_string_operations.cpp).
- **Konsep:** Operasi string.
- **Cara kerja:** Operator + menggabungkan dua string; size membaca panjang gabungannya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 89_string_operations](output/89_string_operations.png)

### 90. Fungsi anggota `string`

- **Kode:** [`90_string_methods.cpp`](90_string_methods.cpp).
- **Konsep:** Fungsi anggota `string`.
- **Cara kerja:** substr mengambil awal string dan replace mengganti sebagian teks.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 90_string_methods](output/90_string_methods.png)

### 91. Pencarian teks

- **Kode:** [`91_string_search.cpp`](91_string_search.cpp).
- **Konsep:** Pencarian teks.
- **Cara kerja:** find mencari substring dan npos digunakan sebagai penanda tidak ditemukan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 91_string_search](output/91_string_search.png)

### 92. Manipulasi string

- **Kode:** [`92_string_manipulation.cpp`](92_string_manipulation.cpp).
- **Konsep:** Manipulasi string.
- **Cara kerja:** toupper diterapkan ke setiap karakter lewat unsigned char agar pemanggilannya sah.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 92_string_manipulation](output/92_string_manipulation.png)

### 93. C-style string

- **Kode:** [`93_c_style_string.cpp`](93_c_style_string.cpp).
- **Konsep:** C-style string.
- **Cara kerja:** Array char diakhiri nul; strlen menghitung karakter sebelum terminator.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 93_c_style_string](output/93_c_style_string.png)

### 94. `std::vector`

- **Kode:** [`94_vector_basic.cpp`](94_vector_basic.cpp).
- **Konsep:** `std::vector`.
- **Cara kerja:** std::vector menyimpan tiga bilangan dalam koleksi berukuran dinamis.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 94_vector_basic](output/94_vector_basic.png)

### 95. Operasi vector

- **Kode:** [`95_vector_operations.cpp`](95_vector_operations.cpp).
- **Konsep:** Operasi vector.
- **Cara kerja:** push_back menambah, erase menghapus awal, size dan back membaca keadaan vector.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 95_vector_operations](output/95_vector_operations.png)

### 96. Pengurutan vector

- **Kode:** [`96_vector_sorting.cpp`](96_vector_sorting.cpp).
- **Konsep:** Pengurutan vector.
- **Cara kerja:** std::sort mengurutkan elemen vector melalui pasangan iterator begin/end.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 96_vector_sorting](output/96_vector_sorting.png)

### 97. Vector berisi objek

- **Kode:** [`97_vector_of_objects.cpp`](97_vector_of_objects.cpp).
- **Konsep:** Vector berisi objek.
- **Cara kerja:** Vector menyimpan struct Siswa; loop membaca nama dan nilai dari tiap objek.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 97_vector_of_objects](output/97_vector_of_objects.png)

