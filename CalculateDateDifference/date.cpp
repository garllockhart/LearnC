/*
File Name		: date.cpp
Description		: 
Author			: Garly Nugraha
Date Created	: 08/02/2022
*/

#include <stdio.h>
#include <math.h>
#include "date.h"

/* ==================== Operasi Primitif ==================== */
void CreateDate (date * D)
{
	SetTgl (01, &(* D));
	SetBln (01, &(* D));
	SetThn (1900, &(* D));
}

/* ==================== Selector komponen ==================== */

/* Mengambil bagian Tanggal dari Date */
int GetTgl (date D)
{
	return(D.Tgl);
}

/* Mengambil bagian Bulan dari Date */
int GetBln (date D)
{
	return(D.Bln);
}

/* Mengambil bagian Tahun dari Date */
int GetThn (date D)
{
	return(D.Thn);
}


/* ==================== Pengubah komponen ==================== */

/* Memberi nilai untuk Tanggal */
void SetTgl (int NewTgl, date * D)
{
	(* D).Tgl = NewTgl;
}

/* Memberi nilai untuk Bulan */
void SetBln (int NewBln, date * D)
{
	(* D).Bln = NewBln;
}

/* Memberi nilai untuk Tahun */
void SetThn (int NewThn, date * D)
{
	(* D).Thn = NewThn;
}


/* =================== Kelompok Interaksi dengan I/O device, BACA/TULIS =================== */

/* Membentuk Date dari Input Tanggal, Input Bulan dan Input Tahun yang dibaca dari keyboard */
void BacaDate (date * D)
{
	printf("\n\n");
	
	printf("Tanggal : ");
	scanf("%d", &((*D).Tgl));
	
	printf("Bulan : ");
	scanf("%d", &((*D).Bln));
	
	printf("Tahun : ");
	scanf("%d", &((*D).Thn));
	
	if(!isValid(*D))
	{
		printf("Data yang anda masukkan salah");
		CreateDate(&(*D));
	}
}

/* Memeriksa apakah suatu Tanggal valid, yaitu dengan memperhatikan batas akhir per bulan */
boolean isValid(date D)
{
	if ((GetThn(D) < 1900) || (GetThn(D) > 30000) || (GetBln(D) < 1) || (GetBln(D) > 12) || (GetTgl(D) < 1) || (GetTgl(D) > TglAkhir(D)))
		return (false);
	else
		return (true);
}

/* Print nilai D dengan format dd/mm/yyyy */
void PrintObj (date D)
{
	printf ("%d/%d/%d\n", GetTgl(D), GetBln(D), GetThn(D));
}

/* =================== Operator Relasional =================== */

/* Memeriksa apakah suatu Tanggal adalah Kabisat */
boolean isKabisat (date D)
{
	return(((GetThn(D) % 4 != 0) || ((GetThn(D) % 100 == 0) && (GetThn(D) % 400 != 0))) ? false : true);
}

/***** Predikat lain *******/

/* Memberikan Tanggal terakhir dari sebuah Bulan */
int TglAkhir (date D)
{
	if((GetBln(D) == 1) || (GetBln(D) == 3) || (GetBln(D) == 5) || (GetBln(D) == 7) || (GetBln(D) == 8) || (GetBln(D) == 10) || (GetBln(D) == 12)) {
		return(31);
	} else if((GetBln(D) == 4) || (GetBln(D) == 6) || (GetBln(D) == 9) || (GetBln(D) == 11)) {
		return(30);
	} else {
		return(isKabisat(D) ? 29 : 28);
	}
}

/* Menampilkan tanggal sebelumnya dari sebuah Date */
void DateBefore (date D)
{
	printf("Tanggal yang diinputkan : ");
	
	PrintObj(D);
	
	if((GetBln(D) == 1) && (GetTgl(D) == 1)) {
		SetThn(GetThn(D) - 1, &D);
		SetBln(12, &D);
		SetTgl(TglAkhir(D), &D);
	} else if(GetTgl(D) == 1) {
		SetBln(GetBln(D) - 1, &D);
		SetTgl(TglAkhir(D), &D);
	} else {
		SetTgl(GetTgl(D) - 1, &D);
		printf("Tanggal sebelumnya : ");
		
		PrintObj(D);
	}
}

/* Menampilkan Tanggal berikutnya dari sebuah Date */
void NextDate (date D)
{	
	if((GetBln(D) == 12) && (GetTgl(D) == TglAkhir(D))) {
		SetThn(GetThn(D) + 1, &D);
		SetBln(1, &D);
		SetTgl(1, &D);
	} else if(GetTgl(D) == TglAkhir(D)) {
		SetBln(GetBln(D) + 1, &D);
		SetTgl(1, &D);
	} else {
		SetTgl(GetTgl(D) + 1, &D);
		
		printf("Tanggal Setelahnya : ");
		
		PrintObj(D);
	}
}

/* Menampilkan selisih 2 Tanggal */
void SelisihDate (date D1, date D2)
{
	int Count;
	
	printf("Tanggal Pertama ");
	PrintObj(D1);
	
	printf("Tanggal Kedua ");
	PrintObj(D2);
	
	if(isKabisat(D1) == true){
		if(GetBln(D1) == GetBln(D2)) {
			Count = ((GetThn(D2) - GetThn(D1)) * 366) + ((GetBln(D2) - GetBln(D1)) * 30) + (GetTgl(D2) - GetTgl(D1));
		} else if(GetBln(D1) == 2 || GetBln(D1) < 2) {
			Count = ((GetThn(D2) - GetThn(D1)) * 365) + ((GetBln(D2) - GetBln(D1)) * 30) + (GetTgl(D2) - GetTgl(D1) - 1);
		} else {
			Count = ((GetThn(D2) - GetThn(D1)) * 365) + ((GetBln(D2) - GetBln(D1)) * 30) + (GetTgl(D2) - GetTgl(D1));
		}	
	} else if (GetBln(D1) <= 2) {
		if(GetBln(D2) > 2) {
			Count = ((GetThn(D2) - GetThn(D1)) * 365) + ((GetBln(D2) - GetBln(D1)) * 30) + (GetTgl(D2) - GetTgl(D1) - 2);
		} else {
			Count = ((GetThn(D2) - GetThn(D1)) * 365) + ((GetBln(D2) - GetBln(D1)) * 30) + (GetTgl(D2) - GetTgl(D1));
		}
	} else{
		Count = ((GetThn(D2) - GetThn(D1)) * 365) + ((GetBln(D2) - GetBln(D1)) * 30) + (GetTgl(D2) - GetTgl(D1));
	}
	
	printf("Selisih dari Tanggal tersebut adalah %d Hari", Count);
}
