/*
Nama File		: prxiter.c
Deskripsi		: Contoh baca nilai x, dan jumlahkan dengan ITERATE
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
	
//	Inisialisasi
	scanf("%d", &x);
	if(x == 999)
	{
		printf("Kasus Kosong");
	} else
	{
		sum = x;
		printf("Print i dengan ITERATE : \n");
		for(;;)
		{
			printf("Masukkan nilai x (int), akhiri dengan 999 : "); /* Proses */
			scanf("%d", &x);
			if(x == 999) /* Kondisi berhenti */
			{
				break;
			} else
			{
				sum = sum + x; /* Elemen lanjutan */
			}
		}
		printf("Akhiri penjumlahan = %d", sum);
	}
	
	return 0;
}
