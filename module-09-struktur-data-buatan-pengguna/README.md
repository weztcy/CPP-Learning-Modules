# Modul 9. Struktur Data Buatan Pengguna

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-09-struktur-data-buatan-pengguna/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-09-struktur-data-buatan-pengguna\NAMA.cpp
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

### 113. Struktur `struct`

- **Kode:** [`113_struct_basic.cpp`](113_struct_basic.cpp).
- **Konsep:** Struktur `struct`.
- **Cara kerja:** struct mengelompokkan nama dan umur dalam satu objek siswa.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 113_struct_basic](output/113_struct_basic.png)

### 114. Array of structures

- **Kode:** [`114_struct_array.cpp`](114_struct_array.cpp).
- **Konsep:** Array of structures.
- **Cara kerja:** Array berisi dua struct; loop membaca field tiap siswa.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 114_struct_array](output/114_struct_array.png)

### 115. Struct sebagai parameter fungsi

- **Kode:** [`115_struct_function.cpp`](115_struct_function.cpp).
- **Konsep:** Struct sebagai parameter fungsi.
- **Cara kerja:** Fungsi menerima const Buku& agar record dibaca tanpa salinan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 115_struct_function](output/115_struct_function.png)

### 116. Enumerasi `enum`

- **Kode:** [`116_enum_basic.cpp`](116_enum_basic.cpp).
- **Konsep:** Enumerasi `enum`.
- **Cara kerja:** enum biasa memberi nama pada nilai integer untuk hari.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 116_enum_basic](output/116_enum_basic.png)

### 117. `enum class`

- **Kode:** [`117_enum_class.cpp`](117_enum_class.cpp).
- **Konsep:** `enum class`.
- **Cara kerja:** enum class membatasi nama enumerator dalam scope Status dan mencegah konversi implisit.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 117_enum_class](output/117_enum_class.png)

### 118. Alias tipe dengan `using`

- **Kode:** [`118_typedef_using.cpp`](118_typedef_using.cpp).
- **Konsep:** Alias tipe dengan `using`.
- **Cara kerja:** using memberi nama singkat untuk vector<int> lalu digunakan membuat daftar nilai.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 118_typedef_using](output/118_typedef_using.png)

### 119. Union

- **Kode:** [`119_union_basic.cpp`](119_union_basic.cpp).
- **Konsep:** Union.
- **Cara kerja:** union memakai ruang penyimpanan bersama; hanya anggota yang terakhir ditulis dibaca.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 119_union_basic](output/119_union_basic.png)

### 120. Nested structure

- **Kode:** [`120_nested_struct.cpp`](120_nested_struct.cpp).
- **Konsep:** Nested structure.
- **Cara kerja:** struct Siswa berisi struct Alamat; field diakses bertingkat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 120_nested_struct](output/120_nested_struct.png)

### 121. Sistem pencatatan data sederhana

- **Kode:** [`121_data_record.cpp`](121_data_record.cpp).
- **Konsep:** Sistem pencatatan data sederhana.
- **Cara kerja:** Vector record menyimpan ID, nama dan nilai; semua record dicetak dengan loop.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 121_data_record](output/121_data_record.png)

