/*
Nama File		: asign1.c
Deskripsi		: Contoh asignment dan print
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>
#include <limits.h>

int main()
{
//	Kamus Data
	int i;
	long int ii;
	
//	Program
	printf("Hello");
	printf("\n");
	
	i = 1234;
	ii = 123456;
	
	printf("Ini nilai i=1234 : %d", i);
	printf("\n");
	printf("Ini nilai ii=123456 : %d", ii);
	printf("\n");
	
//	Print Nilai Batas Integer
	printf("Min dan Max Integer = %d , %d", INT_MIN, INT_MAX);
	printf("\n");
	printf("Max Long Integer = %d", LONG_MAX);
	
	return 0;
}
