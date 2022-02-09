#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	FILE *pf;
	int nilai;
	char jawab;
	
	system("cls");
	if((pf = fopen("BILANGAN.DAT", "wb")) == NULL)
	{
		printf("File gagal dibuat!\n");
		exit(1);
	}
	printf("Program untuk menyimpan data integer ke file bertipe");
	
	do {
		printf("\r\nBilangan yang akan disimpan : ");
		scanf("%d", &nilai);
		putw(nilai, pf);
		printf("Memasukkan data lagi (Y/T)? ");
		jawab = toupper(getche());
	}
	
	while (jawab == 'Y');
	fclose(pf);
	
	printf("\r\nData sudah disimpan pada file.\r\n");
	return 0;
}
