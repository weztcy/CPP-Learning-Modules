# Modul 1. Pengenalan C++ dan Struktur Program

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-01-pengenalan-cpp-dan-struktur-program/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-01-pengenalan-cpp-dan-struktur-program\NAMA.cpp
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

### 1. Program pertama C++

- **Kode:** [`01_hello_world.cpp`](01_hello_world.cpp).
- **Konsep:** Program pertama C++.
- **Cara kerja:** Memanggil std::cout dari iostream untuk mencetak salam pertama ke konsol.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 01_hello_world](output/01_hello_world.png)

### 2. Struktur dasar program

- **Kode:** [`02_struktur_program.cpp`](02_struktur_program.cpp).
- **Konsep:** Struktur dasar program.
- **Cara kerja:** Header menyediakan cout, main menjadi titik masuk, lalu return 0 menandakan sukses.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 02_struktur_program](output/02_struktur_program.png)

### 3. Single-line dan multi-line comments

- **Kode:** [`03_komentar.cpp`](03_komentar.cpp).
- **Konsep:** Single-line dan multi-line comments.
- **Cara kerja:** Komentar // dan /*...*/ diabaikan compiler; hanya dua perintah cout yang ditampilkan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 03_komentar](output/03_komentar.png)

### 4. Escape sequences

- **Kode:** [`04_escape_sequences.cpp`](04_escape_sequences.cpp).
- **Konsep:** Escape sequences.
- **Cara kerja:** Karakter escape \n, \t, tanda kutip dan backslash membentuk baris, tab, serta karakter khusus.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 04_escape_sequences](output/04_escape_sequences.png)

### 5. Output menggunakan `cout`

- **Kode:** [`05_output_cout.cpp`](05_output_cout.cpp).
- **Konsep:** Output menggunakan `cout`.
- **Cara kerja:** Operator << merangkai teks dan bilangan ke std::cout tanpa konversi manual.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 05_output_cout](output/05_output_cout.png)

### 6. Namespace dan `std`

- **Kode:** [`06_namespace_std.cpp`](06_namespace_std.cpp).
- **Konsep:** Namespace dan `std`.
- **Cara kerja:** Prefiks std:: memilih cout dan endl tanpa using namespace std.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 06_namespace_std](output/06_namespace_std.png)

### 7. Format tampilan output

- **Kode:** [`07_format_output.cpp`](07_format_output.cpp).
- **Konsep:** Format tampilan output.
- **Cara kerja:** setw meratakan kolom, fixed dan setprecision membatasi angka menjadi dua desimal.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 07_format_output](output/07_format_output.png)

### 8. Mengenali kesalahan sintaks

- **Kode:** [`08_compile_error.cpp`](08_compile_error.cpp).
- **Konsep:** Mengenali kesalahan sintaks.
- **Cara kerja:** Baris salah tanpa titik koma sengaja dikomentari agar contoh tetap bisa dibangun; buka komentar untuk mengamati error sintaks.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 08_compile_error](output/08_compile_error.png)

### 9. Compiler warnings

- **Kode:** [`09_warning_compiler.cpp`](09_warning_compiler.cpp).
- **Konsep:** Compiler warnings.
- **Cara kerja:** Variabel tak terpakai sengaja dikomentari; buka komentar dan kompilasi /W4 untuk melihat warning, lalu gunakan variabel untuk mengatasinya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 09_warning_compiler](output/09_warning_compiler.png)

### 10. Preprocessor dan header files

- **Kode:** [`10_preprocessor.cpp`](10_preprocessor.cpp).
- **Konsep:** Preprocessor dan header files.
- **Cara kerja:** Direktif #include memuat deklarasi, sedangkan #define mengganti PESAN sebelum kompilasi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 10_preprocessor](output/10_preprocessor.png)

