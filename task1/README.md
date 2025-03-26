# Dokumentasi Proyek: Perbandingan OOP dan Prosedural dalam C++

## Tentang Proyek
Halo! Proyek ini dibuat untuk menunjukkan bagaimana dua pendekatan pemrograman yang berbeda, **Object-Oriented Programming (OOP)** dan **Prosedural**, digunakan untuk menyelesaikan tugas yang sama dalam C++. 

Ada dua file utama dalam proyek ini:
1. `oop.cpp` - Menggunakan pendekatan berbasis objek (OOP).
2. `procedural.cpp` - Menggunakan pendekatan prosedural (langsung dan fungsional).

## Apa yang Ada di Dalamnya?
Di setiap file, kita mengimplementasikan lima fitur utama:

1. **Calculator** → Melakukan operasi dasar: tambah, kurang, kali, bagi.
2. **Student** → Menyimpan dan menampilkan informasi mahasiswa (nama, ID, nilai).
3. **Rectangle** → Menghitung luas dari sebuah persegi panjang.
4. **Counter** → Sebuah penghitung sederhana dengan fitur increment.
5. **Point** → Menyimpan koordinat titik di bidang 2D dan menghitung jaraknya dari titik (0,0).

## Cara Menjalankan Program
Sebelum mulai, pastikan kamu sudah menginstal **MinGW** (untuk Windows) atau memiliki compiler C++ yang siap digunakan.

### **Langkah-langkah Menjalankan Program**
**Untuk OOP (`oop.cpp`)**
```bash
 g++ oop.cpp -o oop_program
 ./oop_program
```

**Untuk Prosedural (`procedural.cpp`)**
```bash
 g++ procedural.cpp -o procedural_program
 ./procedural_program
```

## Contoh Output yang Akan Dihasilkan
Setelah program dijalankan, kamu akan melihat output seperti ini:
```plaintext
Addition: 15
Student: John Doe (ID: 123), Grade: 85.5
Rectangle Area: 20
Counter Value: 1
Distance from Origin: 5
```

## Apa yang Bisa Kita Pelajari dari Proyek Ini?
- **Pendekatan OOP** lebih terstruktur dan memudahkan dalam pengelolaan data serta penggunaan kembali kode.
- **Pendekatan prosedural** lebih langsung dan lebih mudah dipahami untuk program sederhana, tetapi bisa jadi kurang fleksibel untuk proyek yang lebih besar.

Proyek ini dibuat untuk membantu memahami kelebihan dan kekurangan masing-masing pendekatan. Semoga bermanfaat! 🚀

