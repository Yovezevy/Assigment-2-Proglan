# Muhammad Ihsan Malarangeng
# 5024251067
# Laporan Programming Assignment 2: Object Oriented Programming

## 1. Deskripsi Program
Program ini merupakan implementasi sederhana dari Sistem Informasi Akademik (SIM Akademik) menggunakan paradigma Object-Oriented Programming (OOP) dalam bahasa C++. Program ini mendemonstrasikan pembuatan *class*, pemisahan antara deklarasi (*header file*) dan implementasi (*source file*), serta penggunaan konsep dasar OOP seperti *Encapsulation*.

## 2. Struktur Direktori
Sesuai dengan instruksi penugasan, struktur *project* disusun secara modular sebagai berikut:

📁 Assignment 2/
├── 📁 src/
│   ├── 📁 include/
│   │   └── 📄 Mahasiswa.hpp  (File Deklarasi Class)
│   ├── 📄 Mahasiswa.cpp      (File Implementasi Method)
│   └── 📄 main.cpp           (Program Utama)
├── 📄 Makefile               (Skrip otomasi kompilasi)
└── 📄 REPORT.md              (Laporan tugas)

Dalam program ini, diterapkan beberapa konsep utama C++ dan OOP:

Class & Object: Mendefinisikan blueprint Mahasiswa yang memiliki atribut (nama, nrp, departemen, ipk) dan method operasional. Objek kemudian diinstansiasi di dalam fungsi main().

Encapsulation: Seluruh atribut pada class Mahasiswa diset menjadi private. Modifikasi dan pengambilan data dari luar class hanya dapat dilakukan melalui method public (Getter dan Setter). Contohnya, method setIPK() memiliki validasi untuk memastikan nilai IPK yang diinputkan berada dalam rentang 0.0 hingga 4.0.

Custom Namespace (Poin Tambahan): Untuk mencegah terjadinya name collision (bentrok nama fungsi/class) di masa depan, seluruh deklarasi dan implementasi class Mahasiswa dibungkus menggunakan namespace buatan sendiri, yaitu namespace AkademikFTEIC.

Untuk mempermudah proses kompilasi file yang terpisah, program ini menggunakan Makefile. Program dapat dikompilasi dan dijalankan dengan perintah berikut di dalam terminal:

make : Melakukan kompilasi main.cpp dan Mahasiswa.cpp menjadi executable sim_akademik.

make run : Melakukan kompilasi sekaligus langsung menjalankan program.

make clean : Membersihkan file executable hasil kompilasi.

Contoh Output Program
Berikut adalah hasil eksekusi dari program SIM Akademik di mana terdapat instansiasi dua objek mahasiswa dan demonstrasi perubahan (update) nilai IPK menggunakan method setter:

