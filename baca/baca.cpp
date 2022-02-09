/*
Nama File		: baca.c
Deskripsi		: Contoh membaca integer kemudia menulis nilai yang dibaca
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int a;
	
//	Program
	printf("Contoh membaca dan menulis, ketik nilai integer : ");
	scanf("%d", &a);
	printf("Nilai yang dibaca : %d \n", a);
	
	return 0;
}
