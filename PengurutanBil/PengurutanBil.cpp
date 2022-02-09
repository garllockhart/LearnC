#include <stdio.h>

void PengurutanBil(int I)
{
	if(I > 0)
	{
		printf("%d ", I);
		PengurutanBil(I - 1);
	}
}
 
int main()
{
	int bil[1];
	
	printf("==========================================================");
	printf("\n");
	printf("Pengrurutan Bilangan dari Besar ke Kecil");
	printf("\n");
	printf("==========================================================");
	
	printf("\n\n");
	
	printf("Inputkan Batasan Angka : ");
	scanf("%d", &bil[0]);
	printf("\n");
	
	PengurutanBil(bil[0]);
	
	return(0);
}
