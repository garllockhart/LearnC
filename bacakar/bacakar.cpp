/*
Nama File		: bacakar.c
Deskripsi		: Contoh membaca char kemudian menulis nilai yang dibaca
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	char cc;
	
//	Program
	printf("Hello\n");
	printf("Baca 1 karakter : ");
	scanf("%c", &cc);
	printf("%c", cc);
	printf("Bye\n");
	
	return 0;
}
