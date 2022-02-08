/*
File Name		: welcome.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 03/02/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "mahasiswa.h"
#include "total.h"

int Welcome() {
	int Menu;
	
	printf("|==================================|\n");
	printf("|             Menu Total           |\n");
	printf("|==================================|\n");
	printf("|1. Data Mahasiswa                 |\n");
	printf("|2. Data Total                     |\n");
	printf("|3. Back                           |\n");
	printf("|==================================|\n");
    
    printf("\n\n");
    printf("Select Menu : ");
	scanf("%d", &Menu);
	system("cls");
	
    switch (Menu) { 
        case 1:
			MenuMahasiswa();
			break;
		case 2:
			MenuTotal();
			break;
	 	default:
	 		printf("ERROR : Sorry I don't know the answer to this one!!!");
	 		getch();
	 		
	 		system("cls");
	 		
			Welcome();
			break;
    }
}
