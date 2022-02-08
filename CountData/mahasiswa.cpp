/*
File Name		: mahasiswa.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 03/02/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "mahasiswa.h" 
#include "welcome.h"

int MenuMahasiswa()
{
	int Menu;
	
	printf("|==================================|\n");
	printf("|          Menu Mahasiswa          |\n");
	printf("|==================================|\n");
	printf("|1. Create                         |\n");
	printf("|2. Read                           |\n");
	printf("|3. Back                           |\n");
	printf("|==================================|\n");
    
    printf("\n\n");
    printf("Select Menu : ");
	scanf("%d", &Menu);
	system("cls");
	
    switch (Menu) { 
        case 1:
			CreateMahasiswa();
			break;
		case 2:
			ReadMahasiswa();
			break;
		case 3:
			Welcome();
			break;
	 	default:
	 		printf("ERROR : Sorry I don't know the answer to this one!!!");
	 		getch();
	 		
	 		system("cls");
	 		
			MenuMahasiswa();
			break;
    }
}

void CreateMahasiswa() {
	FILE *FileMahasiswa;
	Mahasiswa DataMahasiswa;
	char More;
	
	FileMahasiswa = fopen("Mahasiswa.DAT", "ab+");
	
    if (!FileMahasiswa) 
    { 
        printf ("ERROR : Sorry the file is unavailable!!!\n");
		printf("Press Any Key to continue . . ."); 
		
		getch();
			
		system("cls");
		MenuMahasiswa(); 
    }
	
	do {
    	system("cls");
    	printf("|=====================================|\n");
		printf("|            Create Mahasiswa         |\n");
		printf("|=====================================|\n");
		
		printf("Jurusan : ");
		fflush(stdin);
		scanf("%[^\n]",&DataMahasiswa.Jurusan); 
		
		printf("Program Studi : ");
		fflush(stdin);
		scanf("%[^\n]",&DataMahasiswa.ProgramStudi);
		
		printf("Jumlah Wanita : ");
		fflush(stdin);
		scanf("%d", &DataMahasiswa.JumlahWanita); 
		
		printf("Jumlah Pria : ");
		fflush(stdin);
		scanf("%d", &DataMahasiswa.JumlahPria);
		
		fwrite(&DataMahasiswa, sizeof(DataMahasiswa), 1, FileMahasiswa);
		
		printf("\n");
		printf("Do you want to create more data? (Y/N) ");
		fflush(stdin);
		
		More = getche();
	} while (More == 'Y' || More == 'y');
	
	fclose(FileMahasiswa);
	
	system("cls");
	printf("The data is already stored in the file!!!\n");
	printf("Press Any Key to continue . . .");
	getche();
	
	system("cls");
	
	MenuMahasiswa();
}

void ShowMahasiswa()
{
	FILE *FileMahasiswa;
	Mahasiswa DataMahasiswa;
	
	FileMahasiswa = fopen("Mahasiswa.DAT", "rt");
	
    if (!FileMahasiswa) 
    { 
        printf ("ERROR : Sorry file cannot be open!!!\n"); 
        getch();
		
		MenuMahasiswa();
    } 

    printf("|================================================================================|\n");
    printf("|                                 Data Mahasiswa                                 |\n");
    printf("|================================================================================|\n");
    printf("| Jurusan          Program Studi          Jumlah Wanita          Jumlah Pria     |\n");
    printf("|================================================================================|\n");
	
	while ((fread(&DataMahasiswa, sizeof(DataMahasiswa), 1, FileMahasiswa)) == 1)
	{		
		printf("     %-5s %-15s %-17d %-10d\n", DataMahasiswa.Jurusan, DataMahasiswa.ProgramStudi, DataMahasiswa.JumlahWanita, DataMahasiswa.JumlahPria);
	}
	
	printf("\n\n\n");
	
	fclose(FileMahasiswa);
}

void ReadMahasiswa()
{
	ShowMahasiswa();
	
    printf("Press Any Key to continue . . .");
    getche();
    
    system("cls");
    
    MenuMahasiswa();
}
