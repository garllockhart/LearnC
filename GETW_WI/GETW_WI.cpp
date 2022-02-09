#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	FILE *pf;
	int nilai;
	int nomor = 0;
	
	system("cls");
	
	if((pf = fopen("BILANGAN.DAT", "rb")) == NULL)
	{
		printf("File gagal dibuka!\n");
		exit(1);
	}
	printf("Isi file BILANGAN.DAT : \r\n");
	while(1)
	{
		nilai = getw(pf);
		if(feof(pf) != NULL) break;
		printf("%2d. %d\r\n", ++nomor, nilai);
	}
	
	fclose(pf);
	return 0;
}
