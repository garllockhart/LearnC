/*
Nama File		: ifl.c
Deskripsi		: Maksimum dua bilangan yang dibaca
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	int a, b;
	
//	Program Baca Data
	printf("=================== Maksimum 2 Bilangan ===================");
	printf("\n");
	printf("Ketikkan dua bilangan, pisahkan dengan RETURN : \n ");
	scanf("%d %d", &a, &b);
	printf("Ke dua bilangan : a = %d, b = %d \n", a, b);
	if(a >= b)
	{
		printf("Nilai a yang maksimum %d \n", a);
	} else
	{
		printf("Nilai b yang maksimum %d \n", b);
	}
	
	return 0;
}
