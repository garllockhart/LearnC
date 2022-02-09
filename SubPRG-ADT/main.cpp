/*
Nama File		: main.cpp
Deskripsi		: 
Dibuat Oleh		: Dosen DPP / 132 231 591
Tanggal Dibuat	: 29/10/2012
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 10/12/2021
*/

#include <stdio.h>
#include "subprg.h"

int main() {
	int a, b, c;
	
	input (&a,&b);
	
	printf("Kedua Bilangan : a = %d, b = %d \n", a, b);
	
	printf("Maksimum = %d \n", maxab (a, b));
	printf("Menukar kedua bilangan di atas : \n");
	tukar(&a, &b);
	printf("Kedua bilangan setelah ditukar : a = %d, b = %d \n", a, b);
	
	return 0;
}
