/*
Nama File		: konstant.c
Deskripsi		: Membaca jari-jari, menghitung luas lingkaran
				  Latihan pemakaian konstanta
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
	float r;
	
//	Program Baca Data
	printf("Jari-jari lingkaran = ");
	
//	Program Hitung dan Tulis Hasil
	printf("Luas lingkaran = %f \n", pi*r*r);
	printf("Akhir Program \n");
	
	return 0;
}
