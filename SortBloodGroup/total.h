/*
File Name		: total.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 07/02/2022
*/

#ifndef total_H
#define total_H

typedef struct {
	char GolonganDarah[3];
	int JumlahPria;
	int JumlahWanita;
} Total;

int MenuTotal();
void CountTotal();
void ShowTotal();
void ReadTotal();

#endif
