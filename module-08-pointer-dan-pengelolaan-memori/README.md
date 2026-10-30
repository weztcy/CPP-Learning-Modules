# Modul 8. Pointer dan Pengelolaan Memori

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-08-pointer-dan-pengelolaan-memori/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-08-pointer-dan-pengelolaan-memori\NAMA.cpp
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

### 98. Alamat memori

- **Kode:** [`98_memory_address.cpp`](98_memory_address.cpp).
- **Konsep:** Alamat memori.
- **Cara kerja:** Operator & mengambil alamat variabel; alamat yang tercetak berbeda setiap eksekusi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 98_memory_address](output/98_memory_address.png)

### 99. Pointer dasar

- **Kode:** [`99_pointer_basic.cpp`](99_pointer_basic.cpp).
- **Konsep:** Pointer dasar.
- **Cara kerja:** Pointer int* menyimpan alamat angka lalu operator * membaca nilainya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 99_pointer_basic](output/99_pointer_basic.png)

### 100. Dereference pointer

- **Kode:** [`100_pointer_dereference.cpp`](100_pointer_dereference.cpp).
- **Konsep:** Dereference pointer.
- **Cara kerja:** Menulis melalui *ptr mengubah angka asli yang ditunjuk.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 100_pointer_dereference](output/100_pointer_dereference.png)

### 101. Pointer dan array

- **Kode:** [`101_pointer_and_array.cpp`](101_pointer_and_array.cpp).
- **Konsep:** Pointer dan array.
- **Cara kerja:** Nama array menunjuk elemen awal; dereference dan offset membaca dua elemen.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 101_pointer_and_array](output/101_pointer_and_array.png)

### 102. Pointer arithmetic

- **Kode:** [`102_pointer_arithmetic.cpp`](102_pointer_arithmetic.cpp).
- **Konsep:** Pointer arithmetic.
- **Cara kerja:** ++ptr menggeser pointer satu elemen int, bukan satu byte.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 102_pointer_arithmetic](output/102_pointer_arithmetic.png)

### 103. Pointer null

- **Kode:** [`103_nullptr.cpp`](103_nullptr.cpp).
- **Konsep:** Pointer null.
- **Cara kerja:** nullptr menandai pointer kosong; pengecekan dilakukan sebelum dereference.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 103_nullptr](output/103_nullptr.png)

### 104. Pointer sebagai parameter fungsi

- **Kode:** [`104_pointer_function.cpp`](104_pointer_function.cpp).
- **Konsep:** Pointer sebagai parameter fungsi.
- **Cara kerja:** Fungsi menerima int*, memeriksa null lalu mengubah nilai milik pemanggil.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 104_pointer_function](output/104_pointer_function.png)

### 105. Reference dan pointer

- **Kode:** [`105_reference_vs_pointer.cpp`](105_reference_vs_pointer.cpp).
- **Konsep:** Reference dan pointer.
- **Cara kerja:** Reference dan pointer menunjuk objek yang sama dan keduanya bisa mengubahnya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 105_reference_vs_pointer](output/105_reference_vs_pointer.png)

### 106. Alokasi memori dengan `new`

- **Kode:** [`106_dynamic_memory_new.cpp`](106_dynamic_memory_new.cpp).
- **Konsep:** Alokasi memori dengan `new`.
- **Cara kerja:** new int mengalokasikan nilai; delete membebaskannya setelah dipakai.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 106_dynamic_memory_new](output/106_dynamic_memory_new.png)

### 107. Pelepasan memori dengan `delete`

- **Kode:** [`107_dynamic_memory_delete.cpp`](107_dynamic_memory_delete.cpp).
- **Konsep:** Pelepasan memori dengan `delete`.
- **Cara kerja:** delete melepas alokasi; pointer diatur nullptr untuk mencegah pemakaian kembali.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 107_dynamic_memory_delete](output/107_dynamic_memory_delete.png)

### 108. Dynamic array

- **Kode:** [`108_dynamic_array.cpp`](108_dynamic_array.cpp).
- **Konsep:** Dynamic array.
- **Cara kerja:** new int[n] membuat array dinamis, yang harus dibebaskan dengan delete[].
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 108_dynamic_array](output/108_dynamic_array.png)

### 109. Smart pointer `unique_ptr`

- **Kode:** [`109_unique_ptr.cpp`](109_unique_ptr.cpp).
- **Konsep:** Smart pointer `unique_ptr`.
- **Cara kerja:** make_unique membuat pemilik tunggal; destructor otomatis membebaskan memori.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 109_unique_ptr](output/109_unique_ptr.png)

### 110. Smart pointer `shared_ptr`

- **Kode:** [`110_shared_ptr.cpp`](110_shared_ptr.cpp).
- **Konsep:** Smart pointer `shared_ptr`.
- **Cara kerja:** shared_ptr berbagi kepemilikan; use_count menampilkan jumlah pemilik aktif.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 110_shared_ptr](output/110_shared_ptr.png)

### 111. Smart pointer `weak_ptr`

- **Kode:** [`111_weak_ptr.cpp`](111_weak_ptr.cpp).
- **Konsep:** Smart pointer `weak_ptr`.
- **Cara kerja:** weak_ptr mengamati shared_ptr tanpa menambah pemilik; lock aman saat hidup, expired setelah habis.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 111_weak_ptr](output/111_weak_ptr.png)

### 112. Resource Acquisition Is Initialization

- **Kode:** [`112_raii.cpp`](112_raii.cpp).
- **Konsep:** Resource Acquisition Is Initialization.
- **Cara kerja:** Constructor memperoleh resource dan destructor melepasnya saat scope berakhir (RAII).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 112_raii](output/112_raii.png)

