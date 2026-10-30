# Modul 10. Object-Oriented Programming (OOP)

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-10-object-oriented-programming-oop/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-10-object-oriented-programming-oop\NAMA.cpp
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

### 122. Class dan object

- **Kode:** [`122_class_basic.cpp`](122_class_basic.cpp).
- **Konsep:** Class dan object.
- **Cara kerja:** Class Lampu diinstansiasi menjadi objek dan method nyalakan dipanggil.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 122_class_basic](output/122_class_basic.png)

### 123. Data members dan member functions

- **Kode:** [`123_class_members.cpp`](123_class_members.cpp).
- **Konsep:** Data members dan member functions.
- **Cara kerja:** Data sisi privat disimpan pada objek; method luas menghitungnya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 123_class_members](output/123_class_members.png)

### 124. `public`, `private`, dan `protected`

- **Kode:** [`124_access_specifiers.cpp`](124_access_specifiers.cpp).
- **Konsep:** `public`, `private`, dan `protected`.
- **Cara kerja:** private hanya dapat dibaca method dasar, protected diwariskan, public dapat dipanggil main.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 124_access_specifiers](output/124_access_specifiers.png)

### 125. Constructor

- **Kode:** [`125_constructor.cpp`](125_constructor.cpp).
- **Konsep:** Constructor.
- **Cara kerja:** Constructor menerima sisi saat objek dibuat; method menghitung luas.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 125_constructor](output/125_constructor.png)

### 126. Constructor overloading

- **Kode:** [`126_constructor_overloading.cpp`](126_constructor_overloading.cpp).
- **Konsep:** Constructor overloading.
- **Cara kerja:** Dua constructor menginisialisasi ukuran default atau ukuran yang diberikan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 126_constructor_overloading](output/126_constructor_overloading.png)

### 127. Destructor

- **Kode:** [`127_destructor.cpp`](127_destructor.cpp).
- **Konsep:** Destructor.
- **Cara kerja:** Destructor mencetak pesan saat objek meninggalkan blok scope.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 127_destructor](output/127_destructor.png)

### 128. Member initializer list

- **Kode:** [`128_initializer_list.cpp`](128_initializer_list.cpp).
- **Konsep:** Member initializer list.
- **Cara kerja:** Initializer list mengisi const id dan harga sebelum badan constructor berjalan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 128_initializer_list](output/128_initializer_list.png)

### 129. Encapsulation

- **Kode:** [`129_encapsulation.cpp`](129_encapsulation.cpp).
- **Konsep:** Encapsulation.
- **Cara kerja:** Saldo privat diubah hanya melalui setor yang menolak jumlah nonpositif.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 129_encapsulation](output/129_encapsulation.png)

### 130. Getter dan setter

- **Kode:** [`130_getter_setter.cpp`](130_getter_setter.cpp).
- **Konsep:** Getter dan setter.
- **Cara kerja:** Setter memvalidasi rentang 0-100; getter membaca nilai yang tersimpan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 130_getter_setter](output/130_getter_setter.png)

### 131. Pointer `this`

- **Kode:** [`131_this_pointer.cpp`](131_this_pointer.cpp).
- **Konsep:** Pointer `this`.
- **Cara kerja:** this menunjuk objek aktif dan return *this memungkinkan pemanggilan berantai.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 131_this_pointer](output/131_this_pointer.png)

### 132. Static members

- **Kode:** [`132_static_members.cpp`](132_static_members.cpp).
- **Konsep:** Static members.
- **Cara kerja:** Anggota static jumlah dibagi semua instance dan dihitung saat constructor/destructor.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 132_static_members](output/132_static_members.png)

### 133. Static member functions

- **Kode:** [`133_static_functions.cpp`](133_static_functions.cpp).
- **Konsep:** Static member functions.
- **Cara kerja:** Method static dipanggil dari nama class tanpa membuat objek.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 133_static_functions](output/133_static_functions.png)

### 134. Friend function

- **Kode:** [`134_friend_function.cpp`](134_friend_function.cpp).
- **Konsep:** Friend function.
- **Cara kerja:** Friend function mendapat akses khusus untuk membaca field privat.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 134_friend_function](output/134_friend_function.png)

### 135. Operator overloading

- **Kode:** [`135_operator_overloading.cpp`](135_operator_overloading.cpp).
- **Konsep:** Operator overloading.
- **Cara kerja:** operator+ didefinisikan untuk menambah komponen dua Titik.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 135_operator_overloading](output/135_operator_overloading.png)

### 136. Inheritance

- **Kode:** [`136_inheritance_basic.cpp`](136_inheritance_basic.cpp).
- **Konsep:** Inheritance.
- **Cara kerja:** Kucing mewarisi bernapas dari Hewan dan menambah method mengeong.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 136_inheritance_basic](output/136_inheritance_basic.png)

### 137. Multilevel inheritance

- **Kode:** [`137_multilevel_inheritance.cpp`](137_multilevel_inheritance.cpp).
- **Konsep:** Multilevel inheritance.
- **Cara kerja:** Kucing mewarisi method Hewan melalui lapisan Mamalia.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 137_multilevel_inheritance](output/137_multilevel_inheritance.png)

### 138. Multiple inheritance

- **Kode:** [`138_multiple_inheritance.cpp`](138_multiple_inheritance.cpp).
- **Konsep:** Multiple inheritance.
- **Cara kerja:** Multifungsi mewarisi dua kemampuan dari dua class dasar berbeda.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 138_multiple_inheritance](output/138_multiple_inheritance.png)

### 139. Virtual function

- **Kode:** [`139_virtual_function.cpp`](139_virtual_function.cpp).
- **Konsep:** Virtual function.
- **Cara kerja:** Method virtual membuat panggilan melalui referensi dasar menjalankan implementasi Kucing.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 139_virtual_function](output/139_virtual_function.png)

### 140. Function overriding

- **Kode:** [`140_function_overriding.cpp`](140_function_overriding.cpp).
- **Konsep:** Function overriding.
- **Cara kerja:** override memastikan tanda tangan method turunan cocok dengan method virtual dasar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 140_function_overriding](output/140_function_overriding.png)

### 141. Polymorphism

- **Kode:** [`141_polymorphism.cpp`](141_polymorphism.cpp).
- **Konsep:** Polymorphism.
- **Cara kerja:** Array pointer dasar menunjuk dua bentuk; panggilan luas memilih method sesuai tipe objek nyata.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 141_polymorphism](output/141_polymorphism.png)

### 142. Abstract class

- **Kode:** [`142_abstract_class.cpp`](142_abstract_class.cpp).
- **Konsep:** Abstract class.
- **Cara kerja:** Class dasar dengan method murni tidak dapat diinstansiasi; Sepeda mengimplementasikannya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 142_abstract_class](output/142_abstract_class.png)

### 143. Pure virtual function

- **Kode:** [`143_pure_virtual_function.cpp`](143_pure_virtual_function.cpp).
- **Konsep:** Pure virtual function.
- **Cara kerja:** = 0 mewajibkan turunan mengimplementasikan method sapa.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 143_pure_virtual_function](output/143_pure_virtual_function.png)

### 144. Virtual destructor

- **Kode:** [`144_virtual_destructor.cpp`](144_virtual_destructor.cpp).
- **Konsep:** Virtual destructor.
- **Cara kerja:** unique_ptr<Dasar> menunjuk Turunan; destructor virtual menjalankan pembersihan turunan lalu dasar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 144_virtual_destructor](output/144_virtual_destructor.png)

### 145. Composition

- **Kode:** [`145_composition.cpp`](145_composition.cpp).
- **Konsep:** Composition.
- **Cara kerja:** Mobil memiliki Mesin sebagai anggota; keduanya hidup dan hancur bersama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 145_composition](output/145_composition.png)

### 146. Aggregation

- **Kode:** [`146_aggregation.cpp`](146_aggregation.cpp).
- **Konsep:** Aggregation.
- **Cara kerja:** Kelas menyimpan referensi ke Guru yang diciptakan di luar dan harus hidup lebih lama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 146_aggregation](output/146_aggregation.png)

### 147. Antarmuka berbasis abstract class

- **Kode:** [`147_interface_design.cpp`](147_interface_design.cpp).
- **Konsep:** Antarmuka berbasis abstract class.
- **Cara kerja:** Fungsi tulis menggunakan interface Penyimpan tanpa bergantung pada implementasi konsol.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 147_interface_design](output/147_interface_design.png)

