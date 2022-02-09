#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define PANJANG 256

int main(void)
{
	FILE *f_teks;
	char string[PANJANG];
	char namafile[65];
	
	printf("==================== Program Untuk Melihat Isi File Teks ====================\r\n");
	printf("Nama File : ");
	gets(namafile);
	
	if ((f_teks = fopen(namafile, "rt"))  == NULL)
	{
		printf("File tak dapat dibuka!\r\n");
		exit(1);
	}
	
	while ((fgets(string, PANJANG, f_teks)) != NULL)
	printf("%s\r", string);
	
	fclose(f_teks);
	return 0;
}
