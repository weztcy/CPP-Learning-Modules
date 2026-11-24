# Modul 13. File Handling dan Exception Handling

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-13-file-handling-dan-exception-handling/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-13-file-handling-dan-exception-handling\NAMA.cpp
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

### 180. Menulis file

- **Kode:** [`180_file_output.cpp`](180_file_output.cpp).
- **Konsep:** Menulis file.
- **Cara kerja:** ofstream membuka file pada direktori kerja, menulis teks dan mengecek pembukaan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 180_file_output](output/180_file_output.png)

### 181. Membaca file

- **Kode:** [`181_file_input.cpp`](181_file_input.cpp).
- **Konsep:** Membaca file.
- **Cara kerja:** File contoh dibuat terlebih dahulu agar ifstream punya data untuk dibaca.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 181_file_input](output/181_file_input.png)

### 182. Menambahkan data ke file

- **Kode:** [`182_file_append.cpp`](182_file_append.cpp).
- **Konsep:** Menambahkan data ke file.
- **Cara kerja:** File dibuat, kemudian ios::app menambah baris tanpa menimpa isi awal.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 182_file_append](output/182_file_append.png)

### 183. Membaca file per baris

- **Kode:** [`183_file_read_line.cpp`](183_file_read_line.cpp).
- **Konsep:** Membaca file per baris.
- **Cara kerja:** getline membaca tiap baris dari file dan nomor baris dihitung terpisah.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 183_file_read_line](output/183_file_read_line.png)

### 184. Validasi operasi file

- **Kode:** [`184_file_validation.cpp`](184_file_validation.cpp).
- **Konsep:** Validasi operasi file.
- **Cara kerja:** ifstream gagal membuka path yang tidak ada; is_open mendeteksi kegagalan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 184_file_validation](output/184_file_validation.png)

### 185. Membaca dan menulis CSV sederhana

- **Kode:** [`185_csv_read_write.cpp`](185_csv_read_write.cpp).
- **Konsep:** Membaca dan menulis CSV sederhana.
- **Cara kerja:** CSV sederhana ditulis lalu dipisah dengan koma; tidak mendukung field berisi koma berkutip.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 185_csv_read_write](output/185_csv_read_write.png)

### 186. Exception handling

- **Kode:** [`186_exception_basic.cpp`](186_exception_basic.cpp).
- **Konsep:** Exception handling.
- **Cara kerja:** Exception runtime_error dilempar dan pesan what ditangkap lewat std::exception.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 186_exception_basic](output/186_exception_basic.png)

### 187. `try-catch`

- **Kode:** [`187_try_catch.cpp`](187_try_catch.cpp).
- **Konsep:** `try-catch`.
- **Cara kerja:** stoi pada teks nonangka melempar invalid_argument yang ditangkap secara spesifik.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 187_try_catch](output/187_try_catch.png)

### 188. `throw`

- **Kode:** [`188_throw_exception.cpp`](188_throw_exception.cpp).
- **Konsep:** `throw`.
- **Cara kerja:** Fungsi bagi melempar invalid_argument sebelum pembagian dengan nol.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 188_throw_exception](output/188_throw_exception.png)

### 189. Custom exception

- **Kode:** [`189_custom_exception.cpp`](189_custom_exception.cpp).
- **Konsep:** Custom exception.
- **Cara kerja:** Exception kustom mewarisi std::exception dan mengganti what untuk pesan domain.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 189_custom_exception](output/189_custom_exception.png)

### 190. Penanganan kesalahan input

- **Kode:** [`190_input_error_handling.cpp`](190_input_error_handling.cpp).
- **Konsep:** Penanganan kesalahan input.
- **Cara kerja:** cin yang gagal dibersihkan lalu sisa baris diabaikan sebelum mencoba lagi.
- **Input contoh:** `salah | 42` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 190_input_error_handling](output/190_input_error_handling.png)

### 191. Penyimpanan data permanen sederhana

- **Kode:** [`191_file_data_persistence.cpp`](191_file_data_persistence.cpp).
- **Konsep:** Penyimpanan data permanen sederhana.
- **Cara kerja:** Nilai dibaca dari jumlah.txt, dinaikkan dan ditulis kembali agar tersimpan antarproses.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 191_file_data_persistence](output/191_file_data_persistence.png)

