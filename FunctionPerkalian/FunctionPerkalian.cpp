/*
Nama File		: modular.cpp
Deskripsi		: 
Dibuat Oleh		: Dosen DDP
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 26/11/2021
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

//	Prototype
void Kali(int b,int p, int *h);

int bil, pengali, hasil;

//	Program Main
int main ()
{
	
	hasil = 0;
	printf("\n Masukkan Nilai Bilangan = ");
	scanf("%d", &bil);

	printf("\n Masukkan Nilai Pengali = ");
	scanf("%d", &pengali);
	
	Kali(bil, pengali, &hasil);
	
	printf ("\n\n Main program Hasil bagi adalah = %d", hasil);
	
	return 0;
}

//	Modul Kali
void Kali (int b, int p, int *h)
{
	int bb, bp, n;
	bb = b;
	bp = p;
	
	if((b == 0) || (p == 0))
	{
		*h = 0;
	} 

	else
	{
		if(bp < 0)
		{
			bp = -1 * bp;
		} 
		
		n = 1;
		b = 0;
		while(n <= bp)
		{
			b = bb + b;
			*h = b;
			n = n + 1;
		}
	}
	
	if(p < 0)
	{
		*h = -1 * (*h);
	}
}
