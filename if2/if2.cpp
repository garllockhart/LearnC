/*
Nama File		: ifl.c
Deskripsi		: Contoh pemakaian if dua kasus komplementer
				  Membaca sebuah nilai integer
				  Menuliskan 'Nilai a positif, Nilai a', Jika a >= 0 'Nilai a negatif, nilai a', Jika a <= 0
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
	printf("=================== Contoh IF 2 Kasus ===================");
	printf("\n");
	printf("Ketikkan suatu nilai integer : ");
	scanf("%d", &a);
	if(a >= 0)
	{
		printf("Nilai a positif %d \n", a);
	} else
	{
		printf("Nilai a negatif %d \n", a);
	}
	
	return 0;
}
