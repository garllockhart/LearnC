/*
Nama File		: maxmodul.cpp
Deskripsi		: 
Dibuat Oleh		: Dosen DPP / 132 231 591
Tanggal Dibuat	: 29/10/2012
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 10/12/2021
*/

#include <stdio.h>
#include "maxmodul.h"

int main()
{
	j = 0;
	k = 0;
	n = 5;
	m = 7;
	
	printf("Mencari posisi bilangan terbesar pada arrat A : \n");
	j = max(a, n, &j);
	printf("Posisi bilangan dengan nilai terbesar pada array A = %d, dengan nilai bilangan = %d \n", j, a[j]);
	printf("Mencari posisi bilangan terbesar pada array B : \n");
	k = max(b, m, &k);
	printf("Posisi bilangan dengan nilai terbesar pada array B = %d, dengan nilai bilangan = %d \n", k, b[k]);
	printf("Hasil kali bilangan terbesar pada array A dan B = %d \n", a[j]*b[k]);
	
	return 0;
}
