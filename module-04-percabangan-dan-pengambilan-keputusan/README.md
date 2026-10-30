# Modul 4. Percabangan dan Pengambilan Keputusan

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-04-percabangan-dan-pengambilan-keputusan/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-04-percabangan-dan-pengambilan-keputusan\NAMA.cpp
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

### 39. Percabangan `if`

- **Kode:** [`39_if_statement.cpp`](39_if_statement.cpp).
- **Konsep:** Percabangan `if`.
- **Cara kerja:** Blok if menampilkan pesan hanya jika nilai memenuhi batas lulus.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 39_if_statement](output/39_if_statement.png)

### 40. Percabangan `if-else`

- **Kode:** [`40_if_else.cpp`](40_if_else.cpp).
- **Konsep:** Percabangan `if-else`.
- **Cara kerja:** if/else memilih tepat satu cabang berdasarkan suhu.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 40_if_else](output/40_if_else.png)

### 41. Percabangan bertingkat

- **Kode:** [`41_else_if.cpp`](41_else_if.cpp).
- **Konsep:** Percabangan bertingkat.
- **Cara kerja:** Rangkaian if/else if menentukan kategori nilai dari batas tertinggi dahulu.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 41_else_if](output/41_else_if.png)

### 42. Nested if

- **Kode:** [`42_nested_if.cpp`](42_nested_if.cpp).
- **Konsep:** Nested if.
- **Cara kerja:** if luar memeriksa tiket dan if dalam memeriksa umur; cabang else menangani kegagalan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 42_nested_if](output/42_nested_if.png)

### 43. Percabangan `switch-case`

- **Kode:** [`43_switch_case.cpp`](43_switch_case.cpp).
- **Konsep:** Percabangan `switch-case`.
- **Cara kerja:** switch memilih nama hari berdasarkan int dan break mencegah fallthrough.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 43_switch_case](output/43_switch_case.png)

### 44. Pengambilan keputusan dengan ternary

- **Kode:** [`44_ternary_decision.cpp`](44_ternary_decision.cpp).
- **Konsep:** Pengambilan keputusan dengan ternary.
- **Cara kerja:** Operator ternary menetapkan pesan lulus atau belum lulus pada satu ekspresi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 44_ternary_decision](output/44_ternary_decision.png)

### 45. Program penentuan nilai

- **Kode:** [`45_grade_calculator.cpp`](45_grade_calculator.cpp).
- **Konsep:** Program penentuan nilai.
- **Cara kerja:** Input divalidasi 0-100, lalu rentang nilai dipetakan menjadi grade A sampai E.
- **Input contoh:** `85` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 45_grade_calculator](output/45_grade_calculator.png)

### 46. Bilangan genap dan ganjil

- **Kode:** [`46_even_odd.cpp`](46_even_odd.cpp).
- **Konsep:** Bilangan genap dan ganjil.
- **Cara kerja:** Sisa bagi dua menentukan bilangan genap atau ganjil dari input.
- **Input contoh:** `8` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 46_even_odd](output/46_even_odd.png)

### 47. Program tahun kabisat

- **Kode:** [`47_leap_year.cpp`](47_leap_year.cpp).
- **Konsep:** Program tahun kabisat.
- **Cara kerja:** Aturan habis dibagi 400 atau 4 tetapi bukan 100 menentukan tahun kabisat.
- **Input contoh:** `2024` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 47_leap_year](output/47_leap_year.png)

### 48. Kalkulator sederhana

- **Kode:** [`48_simple_calculator.cpp`](48_simple_calculator.cpp).
- **Konsep:** Kalkulator sederhana.
- **Cara kerja:** switch menghitung +, -, *, /; operator asing dan pembagi nol ditolak.
- **Input contoh:** `8 / 2` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 48_simple_calculator](output/48_simple_calculator.png)

