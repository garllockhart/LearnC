/*
File Name		: PTR17.cpp
Made by			: Tim Dosen SDA
Created Date	: 13/09/2001
Edited by		: Garly Nugraha
Edited Date		: 24/02/2022
Description		: 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* kamus */ /* Definisi tabel integer */
	typedef struct {
		int *T; /* array integernya */
		int N; /* Ukuran efektif */
	} tabint;
	
	tabint MyTab;
	int i;
	
	/* program */
	printf("Tentukan ukuran tabel, maks 10 = ");
	scanf("%d", &(MyTab.N));
	MyTab.T = (int *) malloc (MyTab.N * sizeof(int));
	/* isi dengan assignment */
	for (i = 0; i < MyTab.N; i++)
	{
		*(MyTab.T + i) = i;
		printf("i = %d MyTab.T = %d \n", i, *(MyTab.T+i));
	};
	
	return 0;
}
