/*
Nama File		: tabel1.c
Deskripsi		: Tujuan sam dengan tabel.c, hanya pada script ini digunakan struktur while dan ada penyederhanaan proses
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
	
//	Penyederhanaan proses dari proses yang ditulis pada program tabel.c
	i = 1;
	while(i <= N)
	{
		tab[i] = i;
		printf("i = %d tab[%d] = %d \n", i, i, tab[i]);
		i++;
	}
	
	return 0;
}
