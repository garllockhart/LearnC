/*
Nama File		: swap.cpp
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
void swap(int *X, int Y);

//	Program Main
int main ()
{
	int A, B;
	
	A = 75;
	B = -100;
	swap(&A, B);
	
	printf("\n %d", A);z
	printf("\n %d", B);
	
	return 0;
}

//	Modul SWAP
void swap (int *X, int Y)
{
	int Temp;
	
	Temp = *X;
	*X = Y;
	Y = Temp;
}
