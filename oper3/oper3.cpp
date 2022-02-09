/*
Nama File		: oper3.c
Deskripsi		: Operator terner
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 31/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int i = 0; /* perhatikan int i, j = 0 buka seperti ini */
	int j = 0;
	char c = 8;
	char d = 10;
	char e = max(c,d);
	int k = max(i,j);
	
//	Program
	printf("Nilai e = %d \n", e);
	printf("Nilai k = %f \n", k);
	
	i = 2;
	j = 3;
	k = max(i++, j++);
	printf("Nilai k = %d \n", k);
	
	return 0;
}
