/*
Nama File		: asign2.c
Deskripsi		: Berisi contoh sederhana untuk mendefinisikan variabel-variabel
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	short ks = 1;
	int ki = 1;
	long kl = 10000;
	char c = 65;
	char cl = 'z';
	float x = 1.55;
	
//	Program Penulisan Karakter Sebagai Karakter
	printf("Karakter = %c", c);
	printf("\n");
	printf("Karakter = %c", cl);
	printf("\n");
	
//	Program Penulisan Karakter Sebagai Integer
	printf("Karakter = %d", c);
	printf("\n");
	printf("Karakter = %d", cl);
	printf("\n");
	
	printf("Bilangan Integer (short) = %d", ks);
	printf("\n");
	printf("\t\t(int) = %d", ki);
	printf("\n");
	printf("\t\t(long) = %ld", kl);
	printf("\n");
	printf("Bilangan Real = %8.3f", x);
	
	return 0;
}
