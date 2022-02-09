/*
Nama File		: priter.c
Deskripsi		: Baca N, print 1 s/d N dengan ITERATE
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
	printf("Print i dengan ITERATE : \n");
	for(;;)
	{
		printf("%d \n", i); /* Proses */
		if(i == N) /* Kondisi berhenti */
		{
			break;
		} else
		{
			i++; /* Elemen lanjutan */
		}
	}
	printf("Akhiri program");
	
	return 0;
}
