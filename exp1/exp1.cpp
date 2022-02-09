/*
Nama File		: exp1.c
Deskripsi		: Pembagian integer, casting
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 31/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int x = 1;
	int y = 2;
	float fx;
	float fy;
	
//	Program
	printf("x/y (format integer) = %d \n", x/y);
	printf("x/y (format float) = %f \n", x/y);
	
//	Agar Hasilnya Tidak Nol
	fx = x;
	fy = y;
	printf("fx/fy (format integer) = %d \n", fx/fy);
	printf("fx/fy (format float) = %f \n", fx/fy);
	
//	Casting
	printf("float(x) / float(y) (format integer) = %d \n", float(x) / float(y));
	printf("float(x) / float(y) (format float) = %f \n", float(x) / float(y));
	x = 10;
	y = 3;
	printf("x/y (format integer) = %d \n", x/y);
	printf("x/y (format float) = %f \n", x/y);
	
	return 0;
}
