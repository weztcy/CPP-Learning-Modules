# Modul 17. Proyek Praktik

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-17-proyek-praktik/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-17-proyek-praktik\NAMA.cpp
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

### 241. Kalkulator konsol

- **Kode:** [`241_calculator_project.cpp`](241_calculator_project.cpp).
- **Konsep:** Kalkulator konsol.
- **Cara kerja:** switch memilih operasi aritmetika pada input; pembagi nol/operator asing menghasilkan error.
- **Input contoh:** `10 + 2` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 241_calculator_project](output/241_calculator_project.png)

### 242. Pengelolaan nilai mahasiswa

- **Kode:** [`242_student_grade_project.cpp`](242_student_grade_project.cpp).
- **Konsep:** Pengelolaan nilai mahasiswa.
- **Cara kerja:** Vector menyimpan pasangan nama/nilai dan menghitung status lulus serta rata-rata.
- **Input contoh:** `2 | Ani 90 | Budi 70` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 242_student_grade_project](output/242_student_grade_project.png)

### 243. Database mahasiswa sederhana

- **Kode:** [`243_student_database_project.cpp`](243_student_database_project.cpp).
- **Konsep:** Database mahasiswa sederhana.
- **Cara kerja:** map menyimpan siswa berdasarkan ID dengan operasi tambah, cari, hapus dan daftar.
- **Input contoh:** `1 1 Ani | 1 2 Budi | 2 1 | 4 | 3 2 | 0` (pisahkan `|` dengan Enter).
- **Perintah:** `1 id nama` tambah, `2 id` cari, `3 id` hapus, `4` daftar, `0` keluar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 243_student_database_project](output/243_student_database_project.png)

### 244. Sistem inventaris barang

- **Kode:** [`244_inventory_system_project.cpp`](244_inventory_system_project.cpp).
- **Konsep:** Sistem inventaris barang.
- **Cara kerja:** map menyimpan barang/stok; ambil menolak jumlah melebihi stok yang ada.
- **Input contoh:** `1 1 Buku 10 | 2 1 3 | 3 | 0` (pisahkan `|` dengan Enter).
- **Perintah:** `1 id nama stok` tambah, `2 id jumlah` ambil, `3` daftar, `0` keluar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 244_inventory_system_project](output/244_inventory_system_project.png)

### 245. Sistem kasir

- **Kode:** [`245_cashier_system_project.cpp`](245_cashier_system_project.cpp).
- **Konsep:** Sistem kasir.
- **Cara kerja:** Loop mengalikan harga dan kuantitas lalu membandingkan pembayaran dengan total.
- **Input contoh:** `2 | 100 2 | 50 1 | 300` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 245_cashier_system_project](output/245_cashier_system_project.png)

### 246. Simulasi rekening bank

- **Kode:** [`246_bank_account_project.cpp`](246_bank_account_project.cpp).
- **Konsep:** Simulasi rekening bank.
- **Cara kerja:** Class rekening membatasi setor/tarik dan menolak penarikan melampaui saldo.
- **Input contoh:** `1 100 | 2 30 | 3 | 0` (pisahkan `|` dengan Enter).
- **Perintah:** `1 jumlah` setor, `2 jumlah` tarik, `3` saldo, `0` keluar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 246_bank_account_project](output/246_bank_account_project.png)

### 247. Sistem perpustakaan

- **Kode:** [`247_library_management_project.cpp`](247_library_management_project.cpp).
- **Konsep:** Sistem perpustakaan.
- **Cara kerja:** map menyimpan buku dan status pinjam; operasi pinjam/kembali memeriksa status dahulu.
- **Input contoh:** `1 1 Cpp | 2 1 | 4 | 3 1 | 4 | 0` (pisahkan `|` dengan Enter).
- **Perintah:** `1 id judul` tambah, `2 id` pinjam, `3 id` kembali, `4` daftar, `0` keluar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 247_library_management_project](output/247_library_management_project.png)

### 248. Sistem data pegawai

- **Kode:** [`248_employee_management_project.cpp`](248_employee_management_project.cpp).
- **Konsep:** Sistem data pegawai.
- **Cara kerja:** map menyimpan pegawai dan gaji, lalu mendukung tambah, ubah, hapus dan daftar.
- **Input contoh:** `1 1 Ani 1000 | 2 1 1200 | 4 | 0` (pisahkan `|` dengan Enter).
- **Perintah:** `1 id nama gaji` tambah, `2 id gaji` ubah, `3 id` hapus, `4` daftar, `0` keluar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 248_employee_management_project](output/248_employee_management_project.png)

### 249. Pencatatan pengeluaran

- **Kode:** [`249_expense_tracker_project.cpp`](249_expense_tracker_project.cpp).
- **Konsep:** Pencatatan pengeluaran.
- **Cara kerja:** Vector menyimpan kategori/jumlah pengeluaran, loop merinci dan menjumlahkannya.
- **Input contoh:** `1 Makan 100 | 1 Jalan 50 | 2 | 0` (pisahkan `|` dengan Enter).
- **Perintah:** `1 kategori jumlah` catat, `2` tampilkan total, `0` keluar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 249_expense_tracker_project](output/249_expense_tracker_project.png)

### 250. Permainan berbasis terminal

- **Kode:** [`250_terminal_game_project.cpp`](250_terminal_game_project.cpp).
- **Konsep:** Permainan berbasis terminal.
- **Cara kerja:** Angka acak 1-10 ditantang dalam lima giliran; pesan membandingkan tebakan dengan target.
- **Input contoh:** `1 | 2 | 3 | 4 | 5` (pisahkan `|` dengan Enter).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 250_terminal_game_project](output/250_terminal_game_project.png)

