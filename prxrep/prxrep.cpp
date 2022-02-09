/*
Nama File		: prxrep.c
Deskripsi		: REPEAT dengan pake penanganan kasus kosong
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
		printf("Kasus Kosong \n");
	} else
	{
		sum = 0;
		do
		{
			sum = sum + x;
			printf("Masukkan nilai x (int), akhiri dengan 999 :");
			scanf("%d", &x);
		} while(x != 999);
		printf("Hasil penjumlahan = %d \n", sum);
	}
	
	return 0;
}
