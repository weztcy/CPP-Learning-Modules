# Modul 14. Algoritma dan Struktur Data

Panduan ini mengikuti urutan kurikulum. Setiap file utama `.cpp`
memiliki `main` sendiri: **kompilasi satu submodul setiap kali**.

## Menjalankan program

Dari *Developer Command Prompt for VS* pada direktori akar proyek, ganti
`NAMA.cpp` dengan file pada daftar di bawah (`module-14-algoritma-dan-struktur-data/NAMA.cpp`):

```bat
cl /nologo /std:c++20 /EHsc /W4 /utf-8 /Fe:"%TEMP%\latihan.exe" module-14-algoritma-dan-struktur-data\NAMA.cpp
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

### 192. Linear search

- **Kode:** [`192_linear_search.cpp`](192_linear_search.cpp).
- **Konsep:** Linear search.
- **Cara kerja:** Linear search memeriksa elemen satu per satu dan mengembalikan posisi pertama.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 192_linear_search](output/192_linear_search.png)

### 193. Binary search

- **Kode:** [`193_binary_search.cpp`](193_binary_search.cpp).
- **Konsep:** Binary search.
- **Cara kerja:** Binary search membagi rentang TERURUT menjadi dua sampai nilai ditemukan atau rentang habis.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 193_binary_search](output/193_binary_search.png)

### 194. Bubble sort

- **Kode:** [`194_bubble_sort.cpp`](194_bubble_sort.cpp).
- **Konsep:** Bubble sort.
- **Cara kerja:** Bubble sort membandingkan pasangan bertetangga dan menggeser elemen besar ke akhir.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 194_bubble_sort](output/194_bubble_sort.png)

### 195. Selection sort

- **Kode:** [`195_selection_sort.cpp`](195_selection_sort.cpp).
- **Konsep:** Selection sort.
- **Cara kerja:** Selection sort memilih elemen terkecil dari sisa rentang dan menukarnya ke depan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 195_selection_sort](output/195_selection_sort.png)

### 196. Insertion sort

- **Kode:** [`196_insertion_sort.cpp`](196_insertion_sort.cpp).
- **Konsep:** Insertion sort.
- **Cara kerja:** Insertion sort menyisipkan setiap elemen ke posisi tepat dalam prefiks terurut.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 196_insertion_sort](output/196_insertion_sort.png)

### 197. Merge sort

- **Kode:** [`197_merge_sort.cpp`](197_merge_sort.cpp).
- **Konsep:** Merge sort.
- **Cara kerja:** Merge sort membagi rentang, mengurutkan kedua bagian lalu menggabungkannya.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 197_merge_sort](output/197_merge_sort.png)

### 198. Quick sort

- **Kode:** [`198_quick_sort.cpp`](198_quick_sort.cpp).
- **Konsep:** Quick sort.
- **Cara kerja:** Quick sort memilih pivot, mempartisi kedua sisi lalu mengurutkan subrentang.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 198_quick_sort](output/198_quick_sort.png)

### 199. Linked list

- **Kode:** [`199_linked_list.cpp`](199_linked_list.cpp).
- **Konsep:** Linked list.
- **Cara kerja:** Node menyimpan nilai dan unique_ptr ke node berikutnya; traversal mengikuti rantai.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 199_linked_list](output/199_linked_list.png)

### 200. Doubly linked list

- **Kode:** [`200_doubly_linked_list.cpp`](200_doubly_linked_list.cpp).
- **Konsep:** Doubly linked list.
- **Cara kerja:** Node memiliki pointer ke belakang dan unique_ptr ke depan agar kepemilikan tidak siklik.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 200_doubly_linked_list](output/200_doubly_linked_list.png)

### 201. Binary tree

- **Kode:** [`201_binary_tree.cpp`](201_binary_tree.cpp).
- **Konsep:** Binary tree.
- **Cara kerja:** Akar memiliki anak kiri dan kanan sebagai unique_ptr; ketiganya ditampilkan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 201_binary_tree](output/201_binary_tree.png)

### 202. Binary search tree

- **Kode:** [`202_binary_search_tree.cpp`](202_binary_search_tree.cpp).
- **Konsep:** Binary search tree.
- **Cara kerja:** Insert meletakkan angka kecil di kiri, besar di kanan; pencarian mengikuti aturan itu.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 202_binary_search_tree](output/202_binary_search_tree.png)

### 203. Tree traversal

- **Kode:** [`203_tree_traversal.cpp`](203_tree_traversal.cpp).
- **Konsep:** Tree traversal.
- **Cara kerja:** Tiga fungsi rekursif mengunjungi pohon dalam urutan preorder, inorder, postorder.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 203_tree_traversal](output/203_tree_traversal.png)

### 204. Hash table

- **Kode:** [`204_hash_table.cpp`](204_hash_table.cpp).
- **Konsep:** Hash table.
- **Cara kerja:** unordered_map menjadi hash table sederhana untuk stok berdasarkan nama barang.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 204_hash_table](output/204_hash_table.png)

### 205. Representasi graph

- **Kode:** [`205_graph_representation.cpp`](205_graph_representation.cpp).
- **Konsep:** Representasi graph.
- **Cara kerja:** Daftar adjacency menyimpan tetangga setiap simpul graph tak berarah.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 205_graph_representation](output/205_graph_representation.png)

### 206. Breadth-First Search

- **Kode:** [`206_graph_bfs.cpp`](206_graph_bfs.cpp).
- **Konsep:** Breadth-First Search.
- **Cara kerja:** BFS memakai queue dan penanda visited untuk menelusuri simpul per lapisan.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 206_graph_bfs](output/206_graph_bfs.png)

### 207. Depth-First Search

- **Kode:** [`207_graph_dfs.cpp`](207_graph_dfs.cpp).
- **Konsep:** Depth-First Search.
- **Cara kerja:** DFS rekursif menelusuri cabang dahulu dan menandai simpul agar tidak berulang.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 207_graph_dfs](output/207_graph_dfs.png)

### 208. Backtracking

- **Kode:** [`208_recursion_backtracking.cpp`](208_recursion_backtracking.cpp).
- **Konsep:** Backtracking.
- **Cara kerja:** Backtracking memilih dua dari empat angka, mencetak kombinasi lalu menghapus pilihan terakhir.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 208_recursion_backtracking](output/208_recursion_backtracking.png)

### 209. Dynamic programming dasar

- **Kode:** [`209_dynamic_programming.cpp`](209_dynamic_programming.cpp).
- **Konsep:** Dynamic programming dasar.
- **Cara kerja:** Tabel fib menyimpan subhasil sebelumnya agar setiap suku dihitung sekali.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 209_dynamic_programming](output/209_dynamic_programming.png)

### 210. Analisis kompleksitas algoritma

- **Kode:** [`210_big_o_analysis.cpp`](210_big_o_analysis.cpp).
- **Konsep:** Analisis kompleksitas algoritma.
- **Cara kerja:** Pencarian linear dihitung langkahnya; kasus terburuk O(n) untuk n elemen.
- **Jalankan:** kompilasi file tersebut dengan perintah di atas, lalu eksekusi program.

![Hasil 210_big_o_analysis](output/210_big_o_analysis.png)

