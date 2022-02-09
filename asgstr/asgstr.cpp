/*
Nama File		: asgstr.c
Deskripsi		: Deklarasi & alokasi string, kemudian mengisi dengan membaca
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 31/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	char *str;
	char *str1;
	
//	Program
	printf("\nBaca string, maks 20 karakter : ");
	str=(char*) malloc (20* sizeof(char));
	strcpy(str, "Ini string......");
	printf("String yang diisikan : %s\n", str);
	str1=(char*) malloc (20* sizeof(char));
	strcpy(str1, str);
	printf("String yang disalin : %s\n", str1);
	
	return 0;
}
