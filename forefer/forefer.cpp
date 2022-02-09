/*
Nama File		: forefer.c
Deskripsi		: Loop terus menerus
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	#define true 1
	
//	Program
	printf("Program akan looping, akhiri dengan ^c ");
	while(true)
	{
		printf("Print satu baris... \n");
	}
	
	return 0;
}
