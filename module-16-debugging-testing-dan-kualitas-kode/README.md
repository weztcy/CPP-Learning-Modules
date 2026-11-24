# Modul 16. Debugging, Testing, dan Kualitas Kode

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-16-debugging-testing-dan-kualitas-kode/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-16-debugging-testing-dan-kualitas-kode\NAMA.cpp
"%TEMP%\latihan.exe"
```

Untuk contoh yang membaca input, ketik data setelah program dijalankan;
pada input contoh, tanda `|` berarti tekan Enter sebelum data berikutnya.
Jika program menulis file, jalankan di folder latihan tersendiri supaya data
tidak bercampur. Gambar di `output/` adalah **render output proses yang
benar-benar dijalankan**, bukan screenshot terminal; nilai acak, alamat dan
durasi bisa berubah. Jalankan `python validate.py` dari akar proyek
untuk build dan uji seluruh materi serta memperbarui gambar output.

Nomor 237 dan 238 butuh file implementasi tambahan:

```bat
cl /std:c++20 /EHsc /W4 /Fe:"%TEMP%\latihan.exe" module-16-debugging-testing-dan-kualitas-kode\237_header_files.cpp module-16-debugging-testing-dan-kualitas-kode\237_perhitungan.cpp
cl /std:c++20 /EHsc /W4 /Fe:"%TEMP%\latihan.exe" module-16-debugging-testing-dan-kualitas-kode\238_multi_file_program.cpp module-16-debugging-testing-dan-kualitas-kode\238_pesan.cpp
```

Jalankan `"%TEMP%\latihan.exe"` setelah **salah satu** perintah di atas.
Untuk 235, runtime AddressSanitizer tidak tersedia di mesin uji;
kompilasi dan eksekusi biasa telah lulus. Jangan menjalankan contoh UB
tanpa lingkungan eksperimen terisolasi.

## Materi dan hasil eksekusi

### 229. Debugging dasar

- **Kode:** [`229_debugging_basic.cpp`](229_debugging_basic.cpp).
- **Konsep:** Debugging dasar.
- **Cara kerja:** Loop mencetak i dan jumlah setiap langkah agar debugger/breakpoint bisa membandingkan state.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 229_debugging_basic](output/229_debugging_basic.png)

### 230. Assertion

- **Kode:** [`230_assert.cpp`](230_assert.cpp).
- **Konsep:** Assertion.
- **Cara kerja:** assert memeriksa kuadrat(3) saat assertion aktif; pada NDEBUG assert dihilangkan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 230_assert](output/230_assert.png)

### 231. Pengujian fungsi

- **Kode:** [`231_unit_testing_basic.cpp`](231_unit_testing_basic.cpp).
- **Konsep:** Pengujian fungsi.
- **Cara kerja:** Dua assert memeriksa operasi tambah untuk input positif dan campuran negatif.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 231_unit_testing_basic](output/231_unit_testing_basic.png)

### 232. Pengujian kasus batas

- **Kode:** [`232_test_edge_cases.cpp`](232_test_edge_cases.cpp).
- **Konsep:** Pengujian kasus batas.
- **Cara kerja:** Faktorial diuji untuk nol, satu dan lima supaya kasus dasar tidak terlewat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 232_test_edge_cases](output/232_test_edge_cases.png)

### 233. Pengujian batas input

- **Kode:** [`233_input_boundary_testing.cpp`](233_input_boundary_testing.cpp).
- **Konsep:** Pengujian batas input.
- **Cara kerja:** Validasi diuji pada tepat batas 0/100 serta satu angka di luar tiap sisi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 233_input_boundary_testing](output/233_input_boundary_testing.png)

### 234. Contoh undefined behavior

- **Kode:** [`234_undefined_behavior.cpp`](234_undefined_behavior.cpp).
- **Konsep:** Contoh undefined behavior.
- **Cara kerja:** Akses vector di luar batas lewat [] adalah UB dan hanya ditulis sebagai komentar; at dipakai dengan aman.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 234_undefined_behavior](output/234_undefined_behavior.png)

### 235. Penggunaan sanitizer

- **Kode:** [`235_sanitizer_example.cpp`](235_sanitizer_example.cpp).
- **Konsep:** Penggunaan sanitizer.
- **Cara kerja:** Vector diakses pada indeks yang valid; ubah sementara ke indeks salah HANYA di build sanitizer latihan terisolasi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 235_sanitizer_example](output/235_sanitizer_example.png)

### 236. Refactoring kode

- **Kode:** [`236_code_refactoring.cpp`](236_code_refactoring.cpp).
- **Konsep:** Refactoring kode.
- **Cara kerja:** Rumus diskon yang sama diekstraksi ke fungsi untuk mencegah duplikasi perhitungan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 236_code_refactoring](output/236_code_refactoring.png)

### 237. Pemisahan header dan source

- **Kode:** [`237_header_files.cpp`](237_header_files.cpp).
- **Konsep:** Pemisahan header dan source.
- **Cara kerja:** Header mendeklarasikan kuadrat, file pendukung mendefinisikan, file utama memanggil; kedua cpp harus dilink.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas bersama file pendukung sesuai contoh khusus di atas.

![Hasil 237_header_files](output/237_header_files.png)

### 238. Program dengan beberapa file

- **Kode:** [`238_multi_file_program.cpp`](238_multi_file_program.cpp).
- **Konsep:** Program dengan beberapa file.
- **Cara kerja:** Header menyatakan fungsi pesan; implementasi cpp lain digabung saat linking dengan main.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas bersama file pendukung sesuai contoh khusus di atas.

![Hasil 238_multi_file_program](output/238_multi_file_program.png)

### 239. Namespace buatan sendiri

- **Kode:** [`239_namespaces.cpp`](239_namespaces.cpp).
- **Konsep:** Namespace buatan sendiri.
- **Cara kerja:** Dua namespace memiliki fungsi berbeda yang dipilih dengan prefiks namespace::.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 239_namespaces](output/239_namespaces.png)

### 240. Struktur proyek dan proses build

- **Kode:** [`240_build_project.cpp`](240_build_project.cpp).
- **Konsep:** Struktur proyek dan proses build.
- **Cara kerja:** argc/argv membaca argumen command line dan fallback ke dunia saat tidak ada argumen.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 240_build_project](output/240_build_project.png)

