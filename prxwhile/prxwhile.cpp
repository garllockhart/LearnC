/*
Nama File		: prxwhile.c
Deskripsi		: Contoh baca nilai x, jumlah nilai yang dibaca dengan WHILE
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int sum, x;
	
//	Program
	printf("Masukkan nilai x (int), akhiri dengan 999 = ");
	scanf("%d", &x);
	while(x != 999)
	{
		sum = sum + x;
		printf("Masukkan nilai x (int), akhiri dengan 999 = ");
		scanf("%d", &x);
	}
	printf("Hasil penjumlahan = %d \n", sum);
	
	return 0;
}
