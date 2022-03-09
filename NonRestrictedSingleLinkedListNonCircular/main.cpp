/* 
File Name       : main.cpp
Description   	: 
Made by			: Ade Chandra Nugraha
Created At		: 24-10-2001, di-update tahun 2010
Edited by		: 211511037 - Garly Nugraha - 1B & 211511039 - Jeremia Edwin Hamonangan - 1B
Edited Date		: 08/03/2022
*/

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main()
{
	List L1,L2,L3;
	infotype cari,X;
	address PS;
	int i, j, N;
	float avg;
	address Search1;

	printf("Input jumlah node pada linked list L = ");
	scanf("%d", &N);
	
	CreateList(&L1);
	
	printf("List berhasil dibuat");
	PrintInfo(L1);

	printf("\nMelakukan pengisian list L: ");
	
	for(i = 1; i <= N; i++)
	{
		InsVLast(&L1,i);
	}
	
	printf("List L = ");
	PrintInfo(L1);

	printf("Insert node baru pada awal list\n");
	InsVFirst(&L1, 3);
	PrintInfo(L1);
	printf("Insert node baru pada akhir list\n");
	InsVLast(&L1, 9);
	PrintInfo(L1);
	
	avg = Average(L1);
	printf("Jumlah Elemen List = %d\n", NbElmt(L1));
	printf("Max Elemen = %d di addres %p \n", Max(L1), AdrMax(L1));
	printf("Min Elemen = %d di addres %p \n", Min(L1), AdrMin(L1));
	printf("Average = %5.2f\n", avg);
	
	X = 2;
	Search1 = Search(L1, X);
	
	if(Search1) {
		printf("Address dari info %d berada pada %p\n", X, Search1);
	} else {
		printf("Address info %d tidak ditemukan\n", X);
	}

	InversList(&L1);
	printf("\nList L setelah Invers tanpa Alokasi =");
	PrintInfo(L1);
	
	L2=FInversList(L1);
	printf("List L1 hasil Invers L dgn Alokasi = ");
	PrintInfo(L2);
	
	konkat(L1, L2, &L3);
	printf("\nL3 yang merupakan hasil penggabungan L1 dan L2 dengan konkat = ");
	PrintInfo(L3);
	printf("\nL1 setelah konkat = ");
	PrintInfo(L1);
	printf("\nL2 setelah konkat = ");
	PrintInfo(L2);
	Konkat1(&L1, &L2, &L3);
	printf("\nL3 yang merupakan hasil penggabungan L1 dan L2 dengan konkat 1 = ");
	PrintInfo(L3);
	printf("\nL1 setelah konkat1 = ");
	PrintInfo(L1);
	printf("\nL2 setelah konkat1 = ");
	PrintInfo(L2);
	return 0;
}
