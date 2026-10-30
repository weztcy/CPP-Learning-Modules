# Modul 5. Perulangan

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-05-perulangan/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-05-perulangan\NAMA.cpp
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

### 49. Perulangan `for`

- **Kode:** [`49_for_loop.cpp`](49_for_loop.cpp).
- **Konsep:** Perulangan `for`.
- **Cara kerja:** for menjalankan penghitung dari satu hingga lima.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 49_for_loop](output/49_for_loop.png)

### 50. Perulangan `while`

- **Kode:** [`50_while_loop.cpp`](50_while_loop.cpp).
- **Konsep:** Perulangan `while`.
- **Cara kerja:** while mengulang selagi kondisi penghitung masih benar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 50_while_loop](output/50_while_loop.png)

### 51. Perulangan `do-while`

- **Kode:** [`51_do_while.cpp`](51_do_while.cpp).
- **Konsep:** Perulangan `do-while`.
- **Cara kerja:** do-while mengeksekusi isi setidaknya sekali sebelum memeriksa kondisi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 51_do_while](output/51_do_while.png)

### 52. Nested loop

- **Kode:** [`52_nested_loop.cpp`](52_nested_loop.cpp).
- **Konsep:** Nested loop.
- **Cara kerja:** Dua loop bersarang menghitung tabel perkalian tiga kali tiga.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 52_nested_loop](output/52_nested_loop.png)

### 53. Pernyataan `break`

- **Kode:** [`53_break_statement.cpp`](53_break_statement.cpp).
- **Konsep:** Pernyataan `break`.
- **Cara kerja:** break menghentikan loop ketika penghitung mencapai lima.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 53_break_statement](output/53_break_statement.png)

### 54. Pernyataan `continue`

- **Kode:** [`54_continue_statement.cpp`](54_continue_statement.cpp).
- **Konsep:** Pernyataan `continue`.
- **Cara kerja:** continue melewatkan angka tiga tetapi melanjutkan putaran selanjutnya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 54_continue_statement](output/54_continue_statement.png)

### 55. Penghitung perulangan

- **Kode:** [`55_loop_counter.cpp`](55_loop_counter.cpp).
- **Konsep:** Penghitung perulangan.
- **Cara kerja:** Penghitung bertambah hanya ketika angka 1-10 habis dibagi dua.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 55_loop_counter](output/55_loop_counter.png)

### 56. Penjumlahan berulang

- **Kode:** [`56_sum_numbers.cpp`](56_sum_numbers.cpp).
- **Konsep:** Penjumlahan berulang.
- **Cara kerja:** Loop mengakumulasi angka dari satu sampai batas input 0-1000.
- **Input contoh:** `10` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 56_sum_numbers](output/56_sum_numbers.png)

### 57. Faktorial menggunakan loop

- **Kode:** [`57_factorial_loop.cpp`](57_factorial_loop.cpp).
- **Konsep:** Faktorial menggunakan loop.
- **Cara kerja:** Hasil perkalian berulang menghitung n!; batas 20 mencegah overflow unsigned long long.
- **Input contoh:** `5` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 57_factorial_loop](output/57_factorial_loop.png)

### 58. Tabel perkalian

- **Kode:** [`58_multiplication_table.cpp`](58_multiplication_table.cpp).
- **Konsep:** Tabel perkalian.
- **Cara kerja:** Loop mencetak sepuluh hasil kali dari angka lima.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 58_multiplication_table](output/58_multiplication_table.png)

### 59. Pola angka

- **Kode:** [`59_number_patterns.cpp`](59_number_patterns.cpp).
- **Konsep:** Pola angka.
- **Cara kerja:** Loop dalam mencetak angka dari satu sampai nomor baris sehingga terbentuk segitiga.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 59_number_patterns](output/59_number_patterns.png)

### 60. Pola bintang

- **Kode:** [`60_star_patterns.cpp`](60_star_patterns.cpp).
- **Konsep:** Pola bintang.
- **Cara kerja:** Loop dalam mencetak sejumlah bintang sesuai nomor baris.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 60_star_patterns](output/60_star_patterns.png)

### 61. Pemeriksaan bilangan prima

- **Kode:** [`61_prime_number.cpp`](61_prime_number.cpp).
- **Konsep:** Pemeriksaan bilangan prima.
- **Cara kerja:** Pembagi dicoba sampai akar bilangan secara implisit; kurang dari dua bukan prima.
- **Input contoh:** `17` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 61_prime_number](output/61_prime_number.png)

### 62. Deret Fibonacci

- **Kode:** [`62_fibonacci_loop.cpp`](62_fibonacci_loop.cpp).
- **Konsep:** Deret Fibonacci.
- **Cara kerja:** Dua variabel menyimpan pasangan Fibonacci saat loop menghasilkan sepuluh suku.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 62_fibonacci_loop](output/62_fibonacci_loop.png)

### 63. Permainan tebak angka

- **Kode:** [`63_guessing_game.cpp`](63_guessing_game.cpp).
- **Konsep:** Permainan tebak angka.
- **Cara kerja:** Mesin acak memilih angka 1-10; loop memberi lima kesempatan dan petunjuk arah.
- **Input contoh:** `1 | 2 | 3 | 4 | 5` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 63_guessing_game](output/63_guessing_game.png)

