/*
Nama File		: exp.c
Deskripsi		: Pemakaian operator kondisional
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 31/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int x = 1, y = 2;
	
//	Program
	printf("x = %d \n", x);
	printf("y = %d \n", y);
	
	printf("Hasil ekspresi = (x<y) ? x:y = %d \n", (x<y) ? x:y); /* 1010 And 1000 */
	
	return 0;
}
