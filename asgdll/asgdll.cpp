/*
Nama File		: asgdll.c
Deskripsi		: Asignment float dan print
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	float f;
	long double fll;
	
//	Program
	f = 20.0f;
	fll = 10.0L;
	
//	Program Untuk Menampilkan Hasil Assign Ke Layar
	printf("Nilai f = %f", f);
	printf("\n");
	printf("Nilai fll = %lf", fll);
	return 0;
}
