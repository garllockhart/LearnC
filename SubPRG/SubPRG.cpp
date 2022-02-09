/*
Nama File		: subprg.cpp
Deskripsi		: 
Dibuat Oleh		: Dosen DPP / 132 231 591
Tanggal Dibuat	: 29/10/2012
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 02/12/2001
*/

#include <stdio.h>

int maxab(int x, int y);
void tukar(int *x, int *y);

int main()
{
	int a, b, c;
	printf("Maksimum dua bilangan : \n");
	printf("Ketikkan dua bilangan, pisahkan dengan RETURN : \n");
	scanf("%d %d", &a, &b);
	
	printf("Kedua bilangan : a = %d, b = %d \n", a, b);
	
	printf("Maksimum = %d \n", maxab (a, b));
	printf("Menukar kedua bilangan di atas : \n");
	tukar(&a, &b);
	printf("Kedua bilangan setelah ditukar : a = %d, b = %d \n", a, b);
	
	return 0;
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
