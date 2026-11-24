# Modul 6. Fungsi

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-06-fungsi/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-06-fungsi\NAMA.cpp
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

### 64. Fungsi dasar

- **Kode:** [`64_function_basic.cpp`](64_function_basic.cpp).
- **Konsep:** Fungsi dasar.
- **Cara kerja:** main memanggil fungsi salam yang ditulis terpisah.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 64_function_basic](output/64_function_basic.png)

### 65. Parameter fungsi

- **Kode:** [`65_function_parameters.cpp`](65_function_parameters.cpp).
- **Konsep:** Parameter fungsi.
- **Cara kerja:** Fungsi sapa menerima parameter nama dan dipanggil dengan dua argumen berbeda.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 65_function_parameters](output/65_function_parameters.png)

### 66. Nilai balik fungsi

- **Kode:** [`66_function_return.cpp`](66_function_return.cpp).
- **Konsep:** Nilai balik fungsi.
- **Cara kerja:** Fungsi tambah mengembalikan hasil sehingga bisa langsung dipakai di cout.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 66_function_return](output/66_function_return.png)

### 67. Fungsi `void`

- **Kode:** [`67_void_function.cpp`](67_void_function.cpp).
- **Konsep:** Fungsi `void`.
- **Cara kerja:** Fungsi void mencetak garis sesuai panjang tanpa mengembalikan nilai.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 67_void_function](output/67_void_function.png)

### 68. Function prototype

- **Kode:** [`68_function_prototype.cpp`](68_function_prototype.cpp).
- **Konsep:** Function prototype.
- **Cara kerja:** Prototype memberi tahu compiler tanda tangan kuadrat sebelum definisinya di bawah main.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 68_function_prototype](output/68_function_prototype.png)

### 69. Default arguments

- **Kode:** [`69_default_arguments.cpp`](69_default_arguments.cpp).
- **Konsep:** Default arguments.
- **Cara kerja:** Argumen default dipakai saat sapa dipanggil tanpa nama; argumen eksplisit menggantikannya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 69_default_arguments](output/69_default_arguments.png)

### 70. Function overloading

- **Kode:** [`70_function_overloading.cpp`](70_function_overloading.cpp).
- **Konsep:** Function overloading.
- **Cara kerja:** Dua fungsi luas bernama sama dibedakan berdasarkan jumlah parameter.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 70_function_overloading](output/70_function_overloading.png)

### 71. Pass by value

- **Kode:** [`71_pass_by_value.cpp`](71_pass_by_value.cpp).
- **Konsep:** Pass by value.
- **Cara kerja:** Parameter salinan diubah dalam fungsi; nilai asli di main tetap sama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 71_pass_by_value](output/71_pass_by_value.png)

### 72. Pass by reference

- **Kode:** [`72_pass_by_reference.cpp`](72_pass_by_reference.cpp).
- **Konsep:** Pass by reference.
- **Cara kerja:** Parameter int& mengacu ke nilai asli sehingga perubahan bertahan setelah pemanggilan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 72_pass_by_reference](output/72_pass_by_reference.png)

### 73. Const reference

- **Kode:** [`73_const_reference.cpp`](73_const_reference.cpp).
- **Konsep:** Const reference.
- **Cara kerja:** const string& melewatkan string tanpa menyalin dan melarang perubahan di fungsi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 73_const_reference](output/73_const_reference.png)

### 74. Fungsi rekursif

- **Kode:** [`74_recursive_function.cpp`](74_recursive_function.cpp).
- **Konsep:** Fungsi rekursif.
- **Cara kerja:** Fungsi memanggil dirinya sendiri hingga kasus dasar n sama dengan nol.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 74_recursive_function](output/74_recursive_function.png)

### 75. Faktorial rekursif

- **Kode:** [`75_recursive_factorial.cpp`](75_recursive_factorial.cpp).
- **Konsep:** Faktorial rekursif.
- **Cara kerja:** Kasus dasar n <= 1 mengakhiri rekursi; selain itu n dikalikan faktorial(n-1).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 75_recursive_factorial](output/75_recursive_factorial.png)

### 76. Fibonacci rekursif

- **Kode:** [`76_recursive_fibonacci.cpp`](76_recursive_fibonacci.cpp).
- **Konsep:** Fibonacci rekursif.
- **Cara kerja:** Kasus dasar 0/1 dan dua pemanggilan rekursif menghasilkan sepuluh bilangan Fibonacci kecil.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 76_recursive_fibonacci](output/76_recursive_fibonacci.png)

### 77. Lambda function

- **Kode:** [`77_lambda_function.cpp`](77_lambda_function.cpp).
- **Konsep:** Lambda function.
- **Cara kerja:** Lambda disimpan dalam variabel kali lalu dipanggil seperti fungsi biasa.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 77_lambda_function](output/77_lambda_function.png)

### 78. Function pointer

- **Kode:** [`78_function_pointer.cpp`](78_function_pointer.cpp).
- **Konsep:** Function pointer.
- **Cara kerja:** Pointer fungsi menyimpan alamat tambah dan memanggilnya lewat operasi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 78_function_pointer](output/78_function_pointer.png)

