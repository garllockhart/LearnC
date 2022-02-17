/*
File Name		: main.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 08/02/2022
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "date.h"

int main()
{
	 date D1, D2, D3, D4;
	 char lagi = 'y';

	for (;;)
	{
		system("cls");
		
		CreateDate (&D1);
		
		printf("Hasil CreateDate(&D1), maka D1 bernilai : ");
		
		PrintObj (D1);
		SetTgl(26, &D2);
		SetBln(1, &D2);
		SetThn(2003, &D2);
		
		printf("D2 bernilai : ");
		
		PrintObj(D2);
		BacaDate(&D3);
		
		if(GetBln(D3) == 2)
		{
			if(isKabisat(D3)) {
				printf("Tahun %d adalah Tahun Kabisat\n", GetThn(D3));
			} else {
				printf("Tahun %d bukan Tahun Kabisat\n", GetThn(D3));
			}
		}
		
		DateBefore(D3);
		NextDate(D3);
		BacaDate(&D4);
		
		printf("Setelah perintah BacaDate(&D4), maka D4 bernilai : ");
		
		PrintObj(D4);
		
		printf("\n");
		SelisihDate(D3, D4);
		
		printf("\n\n");
		printf("Lagi? (Y/T)");
		
		lagi = getch();
		
		if (lagi == 'T' || lagi == 't')
		{
			system("cls");
			printf("Terima kasih");
		}	
	}
	
	return 0;
}
