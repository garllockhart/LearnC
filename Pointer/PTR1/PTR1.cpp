/* --------------------------------------------------------- */
/* File Program : PTR1.CPP */
/* Contoh pemakaian pointer */
/* Tujuan : mengetahui panjang dan posisi variabel di memory */
/* --------------------------------------------------------- */

#include <stdio.h>

int main()
{
	 int x, y; // x, y : Variabel tunggal bertipe integer
	 int *px; // px : Variabel tunggal bertipe data pointer yang menunjuk ke suatu alamat di memory yang menyimpan data bernilai integer
	 
	 x = 87; // Variabel x diisi angka 87
	 y = *px; // Variabel y diisi dengan data lokasi dari Variabel px
	 
	 printf("Alamat x = %p\n", &x); // 
	 printf("Isi px = %d\n", x);
	 printf("Nilai yang ditunjuk oleh px = %d\n", *px);
	 printf("Nilai y = %d\n", y);
	 printf("Alamat dari y = %d \n", &y);
	 
	 return 0;
	 
	/* STUDI KASUS : */
	/* - Eksekusi file program tersebut dan pahami maksud program ini */
	/* - Komentari setiap baris program (maksud tiap pernyataan di tiap baris program ) */
	/* - Tambahkan pernyataan untuk menampilkan Alamat varabel y, eksekusi, dan perhatikan hasilnya */
	/* - Bila pernyataan px = &x; diganti dengan y = *px; ,apa yang terjadi? */
	/* - Tulis hasil pemahaman Anda pada kertas yang disediakan */
}
