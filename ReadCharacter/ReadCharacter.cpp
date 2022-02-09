/*
Nama File		: ReadCharacter.cpp
Deskripsi		: Contoh membaca char kemudian menulis nilai yang dibaca
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>

int main()
{
	char InputCharacter;
	
	printf("Hello\n");
	printf("Read 1 character : ");
	scanf("%c", &InputCharacter);
	
	printf("%c", InputCharacter);
	printf("Bye\n");
	
	return 0;
}
