/*
Nama File		: tabel.c
Deskripsi		: Latihan array statis : mengisi dengan assigment, menulis
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 07/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int i, tab[10], N;
	
//	Program
	N = 5;
	printf("Isi dan print tabel untuk indeks 1...5 \n");
	
//	Isi Dengan Assigment
	for(i = 1; i <= N; i++)
	{
		tab[i] = 1;
	}
	
//	Traversal Print
	for(i = 1; i <= N; i++)
	{
		printf("i = %d tab[%d] = %d \n", i, i, tab[i]);
	}
	
	return 0;
}
