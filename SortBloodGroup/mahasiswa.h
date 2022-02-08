/*
File Name		: total.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 07/02/2022
*/

#ifndef mahasiswa_H
#define mahasiswa_H

typedef struct {
	char Kelas[4]; 
	char NIM[10]; 
	char GolonganDarah[3];
	char JenisKelamin[7];
} Mahasiswa; 

int MenuMahasiswa();
void CreateMahasiswa();
void SortMahasiswa();
void ShowMahasiswa();
void ReadMahasiswa();

#endif
