/*
Nama File		: Modular2.cpp
Deskripsi		: 
Dibuat Oleh		: Garly Nugraha
Tanggal Dibuat	: 02/12/2001
*/

#include <stdio.h>
#include <stdlib.h>

int Bil, Pengali, Hasil;

void kali(int b, int p, int *h)
{
	int bp, n;
	bp = p;
	if((b == 0) || (p == 0))
	{
		*h = 0;
	} else
	{
		if(bp < 0)
		{
			bp = bp* - 1;
		}
		n = 1;
		while (n <= bp)
		{
			*h = *h + b;
			n = n + 1;
		}
	}
	if(p < 0)
	{
		*h = *h * -1;
	}
}

int main()
{
	Hasil = 0;
	printf("Masukkan Nilai Bilangan = ");
	scanf("%d", &Bil);
	printf("Masukkan Nilai Pengali = ");
	scanf("%d", &Pengali);
	
	kali(Bil, Pengali, &Hasil);
	printf("Hasil : %d", Hasil);
}
