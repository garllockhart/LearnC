#include <stdio.h>
#include "subprg.h"

void input(int *bil1,int *bil2)
{
	printf("=============== Maksimum 2 Nilai ===============\n");
	printf("Inputkan 2 Bilangan, Pisahkan Dengan RETURN : \n");
	scanf("%d %d", &*bil1, &*bil2);
}

int maxab(int x, int y)
{
	if(x >= y)
	{
		return x;
	} else
	{
		return y;
	}
	
	return ((x >= y) ? x : y);
}

void tukar(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}
