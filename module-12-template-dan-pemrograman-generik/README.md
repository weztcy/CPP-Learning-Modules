# Modul 12. Template dan Pemrograman Generik

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-12-template-dan-pemrograman-generik/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-12-template-dan-pemrograman-generik\NAMA.cpp
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

### 171. Function template

- **Kode:** [`171_function_template.cpp`](171_function_template.cpp).
- **Konsep:** Function template.
- **Cara kerja:** Function template memilih nilai maksimum untuk instansiasi int dan double.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 171_function_template](output/171_function_template.png)

### 172. Multiple template parameters

- **Kode:** [`172_multiple_template_parameters.cpp`](172_multiple_template_parameters.cpp).
- **Konsep:** Multiple template parameters.
- **Cara kerja:** Dua parameter tipe template membolehkan label teks dan nilai angka pada fungsi yang sama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 172_multiple_template_parameters](output/172_multiple_template_parameters.png)

### 173. Class template

- **Kode:** [`173_class_template.cpp`](173_class_template.cpp).
- **Konsep:** Class template.
- **Cara kerja:** Class template menyimpan tipe nilai yang ditentukan saat membuat Kotak<int>.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 173_class_template](output/173_class_template.png)

### 174. Template specialization

- **Kode:** [`174_template_specialization.cpp`](174_template_specialization.cpp).
- **Konsep:** Template specialization.
- **Cara kerja:** Spesialisasi bool memberi tampilan khusus berbeda dari template umum.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 174_template_specialization](output/174_template_specialization.png)

### 175. Default template parameters

- **Kode:** [`175_template_default_parameter.cpp`](175_template_default_parameter.cpp).
- **Konsep:** Default template parameters.
- **Cara kerja:** Parameter tipe default int digunakan bila tipe Data tidak disebutkan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 175_template_default_parameter](output/175_template_default_parameter.png)

### 176. Template type deduction

- **Kode:** [`176_template_type_deduction.cpp`](176_template_type_deduction.cpp).
- **Konsep:** Template type deduction.
- **Cara kerja:** Compiler menyimpulkan T dari argumen cetak, tanpa menulis <int> atau <double>.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 176_template_type_deduction](output/176_template_type_deduction.png)

### 177. Variadic template

- **Kode:** [`177_variadic_template.cpp`](177_variadic_template.cpp).
- **Konsep:** Variadic template.
- **Cara kerja:** Parameter pack dan fold expression mencetak banyak argumen dalam satu pemanggilan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 177_variadic_template](output/177_variadic_template.png)

### 178. Generic programming

- **Kode:** [`178_generic_programming.cpp`](178_generic_programming.cpp).
- **Konsep:** Generic programming.
- **Cara kerja:** Fungsi berbasis iterator menjumlah vector dan list dengan implementasi yang sama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 178_generic_programming](output/178_generic_programming.png)

### 179. Concepts dalam C++20

- **Kode:** [`179_concepts_intro.cpp`](179_concepts_intro.cpp).
- **Konsep:** Concepts dalam C++20.
- **Cara kerja:** Constraint std::integral menolak tipe bukan bilangan bulat saat instansiasi template.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 179_concepts_intro](output/179_concepts_intro.png)

