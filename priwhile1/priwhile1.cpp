/*
Nama File		: priwhile1.c
Deskripsi		: Baca N, print 1 s/d N dengan WHILE (Ringkas)
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int N, i = 1;
	
//	Program
	printf("Nilai N > 0 = ");
	scanf("%d", &N);
	printf("Print i dengan WHILE (Ringkas) : \n");
	while(i <= N)
	{
		printf("%d \n", i);
		i++;
	}
	printf("Akhir program");
	
	return 0;
}
