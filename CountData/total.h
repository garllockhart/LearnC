/*
File Name		: total.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 03/02/2022
*/

#ifndef total_H
#define total_H

typedef struct {
	char Jurusan[15];
	int TotalProgramStudi;
	int JumlahMayoritasPria;
	int JumlahMahasiswaJurusan;
} Total;

int MenuTotal();
void CountTotal();
void ShowTotal();
void ReadTotal();

#endif
