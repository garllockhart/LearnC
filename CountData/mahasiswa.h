/*
File Name		: total.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 03/02/2022
*/

#ifndef mahasiswa_H
#define mahasiswa_H

typedef struct {
	char Jurusan[15]; 
	char ProgramStudi[20]; 
	int JumlahWanita;
	int JumlahPria;
} Mahasiswa; 

int MenuMahasiswa();
void CreateMahasiswa();
void ShowMahasiswa();
void ReadMahasiswa();

#endif
