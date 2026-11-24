# Modul 3. Input, Output, dan Operator

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-03-input-output-dan-operator/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-03-input-output-dan-operator\NAMA.cpp
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

### 25. Input menggunakan `cin`

- **Kode:** [`25_input_cin.cpp`](25_input_cin.cpp).
- **Konsep:** Input menggunakan `cin`.
- **Cara kerja:** cin membaca satu bilangan; program berhenti jika ekstraksi gagal.
- **Input contoh:** `20` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 25_input_cin](output/25_input_cin.png)

### 26. Input teks menggunakan `getline`

- **Kode:** [`26_input_getline.cpp`](26_input_getline.cpp).
- **Konsep:** Input teks menggunakan `getline`.
- **Cara kerja:** getline membaca satu baris penuh termasuk spasi untuk nama lengkap.
- **Input contoh:** `Budi Santoso` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 26_input_getline](output/26_input_getline.png)

### 27. Validasi input dasar

- **Kode:** [`27_input_validation.cpp`](27_input_validation.cpp).
- **Konsep:** Validasi input dasar.
- **Cara kerja:** Pemeriksaan cin dan rentang 0-100 menolak input yang bukan angka atau di luar batas.
- **Input contoh:** `85` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 27_input_validation](output/27_input_validation.png)

### 28. Operator aritmetika

- **Kode:** [`28_arithmetic_operators.cpp`](28_arithmetic_operators.cpp).
- **Konsep:** Operator aritmetika.
- **Cara kerja:** Operator +, -, * dan / menghitung empat hasil; dua int menghasilkan pembagian bulat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 28_arithmetic_operators](output/28_arithmetic_operators.png)

### 29. Operator penugasan

- **Kode:** [`29_assignment_operators.cpp`](29_assignment_operators.cpp).
- **Konsep:** Operator penugasan.
- **Cara kerja:** Operator += dan *= memperbarui variabel tanpa menulis penugasan lengkap.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 29_assignment_operators](output/29_assignment_operators.png)

### 30. Operator perbandingan

- **Kode:** [`30_comparison_operators.cpp`](30_comparison_operators.cpp).
- **Konsep:** Operator perbandingan.
- **Cara kerja:** Perbandingan ==, !=, <, >= menghasilkan nilai bool yang ditampilkan dengan boolalpha.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 30_comparison_operators](output/30_comparison_operators.png)

### 31. Operator logika

- **Kode:** [`31_logical_operators.cpp`](31_logical_operators.cpp).
- **Konsep:** Operator logika.
- **Cara kerja:** Operator &&, || dan ! menggabungkan kondisi tiket serta usia.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 31_logical_operators](output/31_logical_operators.png)

### 32. Increment dan decrement

- **Kode:** [`32_increment_decrement.cpp`](32_increment_decrement.cpp).
- **Konsep:** Increment dan decrement.
- **Cara kerja:** angka++ mengembalikan nilai sebelum naik; --angka menurunkan sebelum dibaca.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 32_increment_decrement](output/32_increment_decrement.png)

### 33. Operator modulus

- **Kode:** [`33_modulus_operator.cpp`](33_modulus_operator.cpp).
- **Konsep:** Operator modulus.
- **Cara kerja:** Operator % mengambil sisa pembagian, termasuk untuk memeriksa paritas.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 33_modulus_operator](output/33_modulus_operator.png)

### 34. Prioritas operator

- **Kode:** [`34_operator_precedence.cpp`](34_operator_precedence.cpp).
- **Konsep:** Prioritas operator.
- **Cara kerja:** Perkalian lebih dahulu dari penjumlahan; kurung mengubah prioritasnya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 34_operator_precedence](output/34_operator_precedence.png)

### 35. Operator ternary

- **Kode:** [`35_ternary_operator.cpp`](35_ternary_operator.cpp).
- **Konsep:** Operator ternary.
- **Cara kerja:** Ekspresi kondisional memilih teks berdasarkan syarat usia.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 35_ternary_operator](output/35_ternary_operator.png)

### 36. Operator bitwise

- **Kode:** [`36_bitwise_operators.cpp`](36_bitwise_operators.cpp).
- **Konsep:** Operator bitwise.
- **Cara kerja:** Operasi AND, OR, XOR dan pergeseran bit diterapkan pada dua bilangan unsigned.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 36_bitwise_operators](output/36_bitwise_operators.png)

### 37. Fungsi matematika

- **Kode:** [`37_math_functions.cpp`](37_math_functions.cpp).
- **Konsep:** Fungsi matematika.
- **Cara kerja:** sqrt, pow dan round dari cmath menghitung akar, pangkat, dan pembulatan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 37_math_functions](output/37_math_functions.png)

### 38. Format angka dengan `iomanip`

- **Kode:** [`38_iomanip_formatting.cpp`](38_iomanip_formatting.cpp).
- **Konsep:** Format angka dengan `iomanip`.
- **Cara kerja:** setw menetapkan lebar kolom; fixed dan setprecision mengatur dua angka desimal.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 38_iomanip_formatting](output/38_iomanip_formatting.png)

