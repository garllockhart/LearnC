/*
Nama File		: ifl.c
Deskripsi		: Contoh pemakaian if satu kasus
				  Membaca nilai integer, menuliskan nilainya jika positif
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int a;
	
//	Program Baca Data
	printf("=================== Contoh IF 1 Kasus ===================");
	printf("\n");
	printf("Ketikkan suatu nilai integer : ");
	scanf("%d", &a);
	if(a >= 0)
	{
		printf("Nilai a positif %d \n", a);
	}
	
	return 0;
}
