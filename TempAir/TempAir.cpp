/*
Nama File		: ifl.c
Deskripsi		: Contoh pemakaian if tiga kasus komplementer
				  Membaca sebuah nilai integer
				  Menuliskan 'Nilai a positif, Nilai a', Jika a > 0 
				  Menuliskan 'Nilai a sama dengan nol, nilai a', Jika a = 0
				  Menuliskan 'Nilai a negatif Nilai a' Jika a < 0
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int T;
	
//	Program Baca Data
	printf("=================== Contoh IF 3 Kasus ===================");
	printf("\n");
	printf("Temperatur (Dalam Derajat C) : ");
	scanf("%d", &T);
	if(T < 0)
	{
		printf("Wujud Air Beku %d \n", T);
	} else if((T >= 0) && (T <= 100))
	{
		printf("Wujud Air Cair %d \n", T);
	} if(T > 100)
	{
		printf("Wujud Air Uap/Gas %d \n", T);
	}
	
	return 0;
}
