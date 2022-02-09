/*
Nama File		: incr.c
Deskripsi		: Efek dari operator
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha & Zahratul Mardiyah
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int i, j;
	
//	Program
	i = 3;
	j = i++;
	printf("Nilai i : %d \nNilai j : %d", ++i, j);
	
	return 0;
}
