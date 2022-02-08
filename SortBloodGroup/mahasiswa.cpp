/*
File Name		: mahasiswa.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 07/02/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "mahasiswa.h" 
#include "welcome.h"

int MenuMahasiswa()
{
	int Menu;
	
	printf("|==================================|\n");
	printf("|          Menu Mahasiswa          |\n");
	printf("|==================================|\n");
	printf("|1. Create                         |\n");
	printf("|2. Sort                           |\n");
	printf("|3. Read                           |\n");
	printf("|4. Back                           |\n");
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
			SortMahasiswa();
			break;
		case 3:
			ReadMahasiswa();
			break;
		case 4:
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
		
		printf("Kelas : ");
		fflush(stdin);
		scanf("%[^\n]", &DataMahasiswa.Kelas); 
		
		printf("NIM : ");
		fflush(stdin);
		scanf("%[^\n]", &DataMahasiswa.NIM);
		
		printf("Golongan Darah : ");
		fflush(stdin);
		scanf("%[^\n]", &DataMahasiswa.GolonganDarah); 
		
		printf("Jenis Kelamin : ");
		fflush(stdin);
		scanf("%[^\n]", &DataMahasiswa.JenisKelamin);
		
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

void SortMahasiswa()
{
	FILE *FileMahasiswa;
	Mahasiswa DataMahasiswa, ArrayDataMahasiswa[100], TempDataMahasiswa;
	int Index, Count, Temp;
	
	FileMahasiswa = fopen("Mahasiswa.DAT", "rb");
	
    if (!FileMahasiswa) 
    { 
        printf ("ERROR : Sorry the file is unavailable!!!\n");
		printf("Press Any Key to continue . . ."); 
		
		getch();
			
		system("cls");
		MenuMahasiswa(); 
    }
    
    Index = 0;
    
    while(fread(&DataMahasiswa, sizeof(DataMahasiswa), 1, FileMahasiswa))
    {
    	ArrayDataMahasiswa[Index] = DataMahasiswa;
    	Index++;
	}
	
	fclose(FileMahasiswa);
	
	Temp = Index;
	
	for (Index = 1; Index < Temp; Index++)
	{
		for (Count = 0; Count < Temp - Index; Count++)
		{
			if ((strcmp(ArrayDataMahasiswa[Count].GolonganDarah, ArrayDataMahasiswa[Count + 1].GolonganDarah) > 0) || (strcmp(ArrayDataMahasiswa[Count].GolonganDarah, ArrayDataMahasiswa[Count + 1].GolonganDarah) == 0) && (strcmp(ArrayDataMahasiswa[Count].JenisKelamin, ArrayDataMahasiswa[Count + 1].JenisKelamin) > 0))
			{
				TempDataMahasiswa = ArrayDataMahasiswa[Count];
				ArrayDataMahasiswa[Count] = ArrayDataMahasiswa[Count + 1];
				ArrayDataMahasiswa[Count + 1] = TempDataMahasiswa;
			}
		}
	}
	
	FileMahasiswa = fopen("Mahasiswa.DAT", "wb");
	
    if (!FileMahasiswa) 
    { 
        printf ("ERROR : Sorry the file is unavailable!!!\n");
		printf("Press Any Key to continue . . ."); 
		
		getch();
			
		system("cls");
		MenuMahasiswa();
    }
    
	for (Index = 0; Index < Temp; Index++)
	{
		fwrite(&ArrayDataMahasiswa[Index], sizeof(ArrayDataMahasiswa[Index]), 1, FileMahasiswa);
	}
	
	fclose(FileMahasiswa);
	
	system("cls");
	printf("Data successfully updated!!!\n");
	printf("Press Any Key to continue . . .");
	getch();
	
	system("cls");
	MenuMahasiswa();
}

void ShowMahasiswa()
{
	FILE *FileMahasiswa;
	Mahasiswa DataMahasiswa;
	
	FileMahasiswa = fopen("Mahasiswa.DAT", "rb");
	
    if (!FileMahasiswa) 
    { 
        printf ("ERROR : Sorry file cannot be open!!!\n"); 
        getch();
		
		system("cls");
		MenuMahasiswa();
    } 

    printf("|====================================================================|\n");
    printf("|                                 Data Mahasiswa                     |\n");
    printf("|====================================================================|\n");
    printf("| Kelas          NIM          Golongan Darah       Jenis Kelamin     |\n");
    printf("|====================================================================|\n");
	
	while ((fread(&DataMahasiswa, sizeof(DataMahasiswa), 1, FileMahasiswa)) == 1)
	{		
		printf("     %-8s %-22s %-17s %-15s\n", DataMahasiswa.Kelas, DataMahasiswa.NIM, DataMahasiswa.GolonganDarah, DataMahasiswa.JenisKelamin);
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
