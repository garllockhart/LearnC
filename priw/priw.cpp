/*
Nama File		: priw.c
Deskripsi		: Baca N, print 1 s/d N dengan WHILE
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int i, N;
	
//	Program
	printf("Nilai N > 0 = ");
	scanf("%d", &N);
	i = 1;
	printf("Print i dengan WHILE : \n");
	while(i <= N)
	{
		printf("%d \n", i);
		i++;
	}
	printf("Akhir program");
	
	return 0;
}
