/*
File Name		: total.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 07/02/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "total.h"
#include "mahasiswa.h"
#include "welcome.h"

int MenuTotal()
{
	int Menu;
	
	printf("|==================================|\n");
	printf("|             Menu Total           |\n");
	printf("|==================================|\n");
	printf("|1. Count                          |\n");
	printf("|2. Read                           |\n");
	printf("|3. Back                           |\n");
	printf("|==================================|\n");
    
    printf("\n\n");
    printf("Select Menu : ");
	scanf("%d", &Menu);
	system("cls");
	
    switch (Menu) { 
        case 1:
			CountTotal();
			break;
		case 2:
			ReadTotal();
			break;
		case 3:
			Welcome();
			break;
	 	default:
	 		printf("ERROR : Sorry I don't know the answer to this one!!!");
	 		getch();
	 		
	 		system("cls");
	 		
			MenuTotal();
			break;
    }
}

void CountTotal()
{
	FILE *FileMahasiswa, *FileTotal;
	Mahasiswa DataMahasiswa;
	Total DataTotal;
	
	int CompareJurusan, CompareJenisKelamin;
	
	FileMahasiswa = fopen("Mahasiswa.DAT", "rb");
	FileTotal = fopen("Total.DAT", "wb");
	
    if (!FileMahasiswa) 
    { 
        printf ("ERROR : Sorry the file is unavailable!!!\n");
		printf("Press Any Key to continue . . ."); 
		
		getch();
			
		system("cls");
		MenuMahasiswa(); 
    }
	
    if (!FileTotal) 
    { 
        printf ("ERROR : Sorry the file is unavailable!!!\n");
		printf("Press Any Key to continue . . ."); 
		
		getch();
			
		system("cls");
		MenuMahasiswa(); 
    }
	
	fread(&DataMahasiswa, sizeof(DataMahasiswa), 1, FileMahasiswa);
	
	while (!feof(FileMahasiswa)) {
		strcpy(DataTotal.GolonganDarah,DataMahasiswa.GolonganDarah);
		DataTotal.JumlahPria = 0;
		DataTotal.JumlahWanita = 0;
		
		CompareJurusan = strcmp(DataMahasiswa.GolonganDarah, DataTotal.GolonganDarah);
		
		while (!feof(FileMahasiswa) && CompareJurusan == 0)
		{	
			CompareJenisKelamin = strcmp(DataMahasiswa.JenisKelamin, "Pria");
			
			if (CompareJenisKelamin == 0) {
				DataTotal.JumlahPria = DataTotal.JumlahPria + 1;
			} else {
				DataTotal.JumlahWanita = DataTotal.JumlahWanita + 1;
			}
			
			fread(&DataMahasiswa, sizeof(DataMahasiswa), 1, FileMahasiswa);
			CompareJurusan = strcmp(DataMahasiswa.GolonganDarah, DataTotal.GolonganDarah);
		}
		
		fwrite(&DataTotal,sizeof(DataTotal),1,FileTotal);
	}
	
	fclose(FileMahasiswa);
	fclose(FileTotal);
	
	system("cls");
	printf("Data successfully updated!!!\n");
	printf("Press Any Key to continue . . .");
	getch();
	
	system("cls");
	MenuTotal();
}

void ShowTotal()
{
	FILE *FileTotal;
	Total DataTotal;
    
    FileTotal = fopen("Total.DAT", "rt");
	
    if (!FileTotal) 
    { 
        printf ("ERROR : Sorry file cannot be open!!!\n"); 
        getch();
		
		system("cls");
		MenuTotal();
    } 
    
    printf("|==================================================|\n");
    printf("|                      Data Total                  |\n");
    printf("|==================================================|\n");
    printf("| Golongan Darah     Jumlah Pria     Jumlah Wanita |\n");
    printf("|==================================================|\n");
	
	while ((fread(&DataTotal, sizeof(DataTotal), 1, FileTotal)) == 1)
	{
		printf("  %-25s %-15d %-15d \n", DataTotal.GolonganDarah, DataTotal.JumlahPria, DataTotal.JumlahWanita);
	}
	
	printf("\n\n\n");
	
	fclose(FileTotal);
}

void ReadTotal()
{
	ShowTotal();
	
    printf("Press Any Key to continue . . .");
    getche();
    
    system("cls");
    
    MenuTotal();
}
