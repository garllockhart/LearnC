/*
Nama File		: konstant1.c
Deskripsi		: Menghitung luas lingkaran, dari jari-jari yang dibaca
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	const float pi = 3.1415;
	float r, luas, kel;
	
//	Program Baca Data
	printf("Jari-jari lingkaran = ");
	scanf("%f", &r);
	
//	Program Hitung
	luas = pi * r * r;
	
//	Program Print Hasil
	printf("Luas lingkaran = %6.2f \n", luas);
	kel = 2 * pi * r;
	printf("Keliling lingkaran = %6.2f \n", kel);
	printf("Akhir Program \n");
	
	return 0;
}
