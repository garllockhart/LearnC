/*
Nama File		: kasus.c
Deskripsi		: Contoh kasus dengan instruksi switch
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 06/09/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
//	Kamus Data
	char cc;
	
//  Program
	printf("Ketikan sebuah huruf, akhiri dengan RETURN !\n");
	scanf("%c", &cc);
	switch(cc)
	{
		case 'a' : {
			printf("Yang anda ketik adalah a\n");
			break;
		}
		case 'u' : {
			printf("Yang anda ketik adalah u\n");
			break;
		}
		case 'e' : {
			printf("Yang anda ketik adalah e\n");
			break;
		}
		case 'i' : {
			printf("Yang anda ketik adalah i\n");
			break;
		}
		default :
			printf("Yang anda ketik adalah huruf mati\n");
	}
	return 0;
}
