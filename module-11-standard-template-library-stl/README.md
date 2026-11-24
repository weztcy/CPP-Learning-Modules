# Modul 11. Standard Template Library (STL)

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-11-standard-template-library-stl/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-11-standard-template-library-stl\NAMA.cpp
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

### 148. `std::pair`

- **Kode:** [`148_pair.cpp`](148_pair.cpp).
- **Konsep:** `std::pair`.
- **Cara kerja:** pair menyatukan ID dan nama lewat first dan second.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 148_pair](output/148_pair.png)

### 149. `std::tuple`

- **Kode:** [`149_tuple.cpp`](149_tuple.cpp).
- **Konsep:** `std::tuple`.
- **Cara kerja:** tuple menyimpan tiga tipe dan get mengambil elemen berdasarkan indeks waktu kompilasi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 149_tuple](output/149_tuple.png)

### 150. Operasi vector lanjutan

- **Kode:** [`150_vector_advanced.cpp`](150_vector_advanced.cpp).
- **Konsep:** Operasi vector lanjutan.
- **Cara kerja:** reserve mengatur kapasitas, insert menyisipkan tengah, emplace_back menambah akhir.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 150_vector_advanced](output/150_vector_advanced.png)

### 151. `std::list`

- **Kode:** [`151_list.cpp`](151_list.cpp).
- **Konsep:** `std::list`.
- **Cara kerja:** list memungkinkan push_front; loop membaca urutan elemennya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 151_list](output/151_list.png)

### 152. `std::deque`

- **Kode:** [`152_deque.cpp`](152_deque.cpp).
- **Konsep:** `std::deque`.
- **Cara kerja:** deque menambah dari kedua ujung lalu mencetak isi berurutan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 152_deque](output/152_deque.png)

### 153. `std::stack`

- **Kode:** [`153_stack.cpp`](153_stack.cpp).
- **Konsep:** `std::stack`.
- **Cara kerja:** stack menerapkan LIFO: elemen terakhir yang dimasukkan keluar dahulu.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 153_stack](output/153_stack.png)

### 154. `std::queue`

- **Kode:** [`154_queue.cpp`](154_queue.cpp).
- **Konsep:** `std::queue`.
- **Cara kerja:** queue menerapkan FIFO: elemen pertama yang masuk keluar dahulu.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 154_queue](output/154_queue.png)

### 155. `std::priority_queue`

- **Kode:** [`155_priority_queue.cpp`](155_priority_queue.cpp).
- **Konsep:** `std::priority_queue`.
- **Cara kerja:** priority_queue mengeluarkan bilangan terbesar lebih dahulu.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 155_priority_queue](output/155_priority_queue.png)

### 156. `std::set`

- **Kode:** [`156_set.cpp`](156_set.cpp).
- **Konsep:** `std::set`.
- **Cara kerja:** set menyortir dan menghilangkan duplikat secara otomatis.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 156_set](output/156_set.png)

### 157. `std::multiset`

- **Kode:** [`157_multiset.cpp`](157_multiset.cpp).
- **Konsep:** `std::multiset`.
- **Cara kerja:** multiset mempertahankan duplikat; count menghitung kemunculan dua.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 157_multiset](output/157_multiset.png)

### 158. `std::map`

- **Kode:** [`158_map.cpp`](158_map.cpp).
- **Konsep:** `std::map`.
- **Cara kerja:** map memetakan nama unik ke nilai dan mengiterasi kunci berurutan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 158_map](output/158_map.png)

### 159. `std::multimap`

- **Kode:** [`159_multimap.cpp`](159_multimap.cpp).
- **Konsep:** `std::multimap`.
- **Cara kerja:** multimap menyimpan lebih dari satu nilai pada kunci nama yang sama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 159_multimap](output/159_multimap.png)

### 160. `std::unordered_set`

- **Kode:** [`160_unordered_set.cpp`](160_unordered_set.cpp).
- **Konsep:** `std::unordered_set`.
- **Cara kerja:** unordered_set menyimpan kunci unik tanpa urutan terjamin; contains memeriksa anggota.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 160_unordered_set](output/160_unordered_set.png)

### 161. `std::unordered_map`

- **Kode:** [`161_unordered_map.cpp`](161_unordered_map.cpp).
- **Konsep:** `std::unordered_map`.
- **Cara kerja:** unordered_map mengambil nilai melalui kunci tanpa menjamin urutan iterasi.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 161_unordered_map](output/161_unordered_map.png)

### 162. Iterator

- **Kode:** [`162_iterators.cpp`](162_iterators.cpp).
- **Konsep:** Iterator.
- **Cara kerja:** Iterator begin/end ditelusuri dan operator * membaca nilai pada posisinya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 162_iterators](output/162_iterators.png)

### 163. Range-based for loop

- **Kode:** [`163_range_based_for.cpp`](163_range_based_for.cpp).
- **Konsep:** Range-based for loop.
- **Cara kerja:** Range-based for dengan referensi memodifikasi isi vector, lalu loop berikutnya membacanya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 163_range_based_for](output/163_range_based_for.png)

### 164. `std::sort`

- **Kode:** [`164_stl_sort.cpp`](164_stl_sort.cpp).
- **Konsep:** `std::sort`.
- **Cara kerja:** std::sort mengurutkan vector dengan dua iterator batas rentang.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 164_stl_sort](output/164_stl_sort.png)

### 165. `std::find`

- **Kode:** [`165_stl_find.cpp`](165_stl_find.cpp).
- **Konsep:** `std::find`.
- **Cara kerja:** std::find menghasilkan iterator elemen yang dicari; selisih dari begin menjadi indeks.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 165_stl_find](output/165_stl_find.png)

### 166. `std::count`

- **Kode:** [`166_stl_count.cpp`](166_stl_count.cpp).
- **Konsep:** `std::count`.
- **Cara kerja:** std::count menghitung jumlah elemen yang sama dengan dua.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 166_stl_count](output/166_stl_count.png)

### 167. `std::transform`

- **Kode:** [`167_stl_transform.cpp`](167_stl_transform.cpp).
- **Konsep:** `std::transform`.
- **Cara kerja:** std::transform mengubah setiap elemen menjadi kuadratnya melalui lambda.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 167_stl_transform](output/167_stl_transform.png)

### 168. `std::accumulate`

- **Kode:** [`168_stl_accumulate.cpp`](168_stl_accumulate.cpp).
- **Konsep:** `std::accumulate`.
- **Cara kerja:** std::accumulate mengurangi rentang menjadi satu jumlah dengan nilai awal nol.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 168_stl_accumulate](output/168_stl_accumulate.png)

### 169. `std::remove_if`

- **Kode:** [`169_stl_remove_if.cpp`](169_stl_remove_if.cpp).
- **Konsep:** `std::remove_if`.
- **Cara kerja:** remove_if memindahkan elemen yang lolos ke depan dan erase menghapus sisa (erase-remove).
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 169_stl_remove_if](output/169_stl_remove_if.png)

### 170. Lambda dengan algoritma STL

- **Kode:** [`170_stl_lambda.cpp`](170_stl_lambda.cpp).
- **Konsep:** Lambda dengan algoritma STL.
- **Cara kerja:** count_if memakai lambda yang menangkap batas lulus dari scope luar.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 170_stl_lambda](output/170_stl_lambda.png)

