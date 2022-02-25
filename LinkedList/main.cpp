/*
File Name		: main.cpp
Made by			: Ade Chandra Nugraha
Created Date	: 
Edited by		: Garly Nugraha
Edited Date		: 23/02/2022
Description		: 
*/

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main()
{
	List L,L1,L3;
	infotype cari,X;
	address PS;
	int i,N;

	printf("Jumlah elemen List yang akan dimasukkan = ");
	scanf("%d",&N);
	
	CreateList(&L);
	
	printf("List baru di-Create ");
	PrintInfo(L);

	printf("\nIsi List setelah diisi sec.otomatis ");
	
	for(i=1;i<=N;i++)
	{
		InsVLast(&L,i*2);
	}
	
	printf("List L = ");
	PrintInfo(L);

	InsVLast(&L,9);
	InsVFirst(&L,3);
	printf("List L setelah Insert ");
	PrintInfo(L);

	printf("Jumlah Elemen List = %d\n", NbElmt(L));
	printf("Max Elemen = %d di addres %p \n", Max(L), AdrMax(L));
	printf("Min Elemen = %d di addres %p \n", Min(L), AdrMin(L));
	printf("Average = %5.2f\n",Average(L));

	InversList(&L);
	printf("List L setelah Invers tanpa Alokasi =");
	PrintInfo(L);
	
	L1=FInversList(L);
	printf("List L1 hasil Invers L dgn Alokasi = ");
	PrintInfo(L1);
	

	return 0;
}

