/* 
File Name       : list.cpp
Description   	: 
Made by			: Ade Chandra Nugraha
Created At		: 24-10-2001, di-update tahun 2010
Edited by		: 211511037 - Garly Nugraha - 1B & 211511039 - Jeremia Edwin Hamonangan - 1B
Edited Date		: 08/03/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "boolean.h"

boolean ListEmpty(List L)
{

	return (First(L) == Nil);
}

void CreateList(List *L)
{
	First(*L) = Nil;
}

address Alokasi(infotype X)
{
	address P = (address)malloc(sizeof(ElmtList));
	
	if (P != Nil)
	{
		Info(P) = X;
		Next(P) = Nil;
	}
	
	return P;
}

void Dealokasi(address *P)
{
	Next(*P) = Nil;
	free(*P);
}

address Search(List L, infotype X)
{
	address P = First(L);
	boolean found = false;

	while ((P != Nil) && (!found))
	{
		if (Info(P) == X) {
			found = true;
		} else {
			P = Next(P);
		}
	}
	
	return P;
}

boolean FSearch(List L, address P)
{
	address PTemp = First(L);
	boolean found = false;

	while ((PTemp != Nil) && (!found))
	{
		if (PTemp == P) {
			found = true;
		} else {
			PTemp = Next(PTemp);
		}

	}
	
	return found;
}

address SearchPrec(List L, infotype X)
{
	address Prec;
	address P;

	if (Next(P) == Nil) {
		Prec = Nil;
	} else {
		P = First(L);
		
		while ((Next(P) != Nil) && (Info(P) != X))
		{
			Prec = P;
			P = Next(P);
		}

		if (Info(P) == X)
		{
			return Prec;
		} else {
			return Nil;
		}
	}
}

void InsVFirst(List *L, infotype X)
{
	address P = Alokasi(X);
	if (P != Nil)
	{
		InsertFirst(&(*L), P);
	}
}

void InsVLast(List *L, infotype X)
{
	address P = Alokasi(X);
	
	if (P != Nil) {
		InsertLast(&(*L), P);
	}
}

void DelVFirst(List *L, infotype *X)
{
	address P;

	DelFirst(&(*L), &P);
	*X = Info(P);
	Dealokasi(&P);
}

void DelVLast(List *L, infotype *X)
{
	address P;
	DelLast(&(*L), &P);
	*X = Info(P);
	Dealokasi(&P);
}

void InsertFirst(List *L, address P)
{
	Next(P) = First(*L);
	First(*L) = P;
}

void InsertAfter(List *L, address P, address Prec)
{
	Next(P) = Next(Prec);
	Next(Prec) = P;
}

void InsertLast(List *L, address P)
{
	address Last;
	
	if (ListEmpty(*L)) {
		InsertFirst(&(*L), P);
	} else {
		Last = First(*L);
		
		while (Next(Last) != Nil)
		{
			Last = Next(Last);
		}

		Next(Last) = P;
	}
}

void DelFirst(List *L, address *P)
{
	*P = First(*L);
	First(*L) = Next(First(*L));
	Next(*P) = Nil;
}

void DelP(List *L, infotype X)
{
	address P = First(*L);

	while ((Next(P) != Nil) && (Info(P) != X))
	{
		P = Next(P);
	}

	if (Info(P) == X)
	{
		Dealokasi(&P);
	}
}

void DelLast(List *L, address *P)
{
	address Last, PrecLast;

	Last = First(*L);

	if (Next(Last) == Nil) {
		DelFirst(&(*L), &(Last));
	} else {
		PrecLast = Nil;
		
		while (Next(Last) != Nil)
		{
			PrecLast = Last;
			Last = Next(Last);
		}
		
		*P = Last;
		Next(PrecLast) = Nil;
	}
}

void DelAfter(List *L, address *Pdel, address Prec)
{
	*Pdel = Next(Prec);
	Next(Prec) = Next(*Pdel);
}

void PrintInfo(List L)
{
	int i;
	address P = First(L);
	
	if (P == Nil) {
		printf("\nList Kosong !\n");
	} else {
		printf("[ ");
		
		do
		{
			printf("%d ", Info(P));
			P = Next(P);
			i++;
		} while (P != Nil);
		
		printf("]");
	}
	
	printf("\n");
}

int NbElmt(List L)
{
	address P;
	int NbEl = 0;
	
	if (ListEmpty(L)) {
		return 0;
	} else {
		P = First(L);
		
		do
		{
			NbEl++;
			P = Next(P);
		} while (P != Nil);
	}
	
	return NbEl;
}

infotype Max(List L)
{

	address P;
	infotype MMax;
	
	if (!ListEmpty(L))
	{
		P = First(L);
		MMax = Info(P);
		
		while (Next(P) != Nil)
		{
			P = Next(P);
			
			if (Info(P) > MMax)
			{
				MMax = Info(P);
			}
		}
	}
	
	return MMax;
}

address AdrMax(List L)
{
	address PMax, P;
	infotype Max;
	
	if (!ListEmpty(L))
	{
		P = First(L);
		Max = Info(P);
		
		while (Next(P) != Nil)
		{
			P = Next(P);
			
			if (Info(P) > Max)
			{
				Max = Info(P);
				PMax = P;
			}
		}
	}
	
	return PMax;
}

infotype Min(List L)
{
	address P;
	infotype MMin;
	
	if (!ListEmpty(L))
	{
		P = First(L);
		MMin = Info(P);
		
		while (Next(P) != Nil)
		{
			P = Next(P);
			
			if (Info(P) < MMin)
			{
				MMin = Info(P);
			}
		}
	}
	
	return MMin;
}

address AdrMin(List L)
{

	address PMin, P;
	infotype Min;
	
	if (!ListEmpty(L))
	{
		P = First(L);
		Min = Info(P);
		
		while (Next(P) != Nil)
		{
			P = Next(P);
			
			if (Info(P) < Min)
			{
				Min = Info(P);
				PMin = P;
			}
		}
	}
	
	return PMin;
}


infotype Average(List L)
{
	address P;
	infotype NbEl, Count;
	float avg;
	
	

	if (!ListEmpty(L))
	{
		P = First(L);
		
		Count = Info(P);
		NbEl = 1;
		
		while (Next(P) != Nil)
		{
			
			P = Next(P);
			Count = Count + Info(P);
			
			NbEl++;
			
		}

		avg = Count / NbEl;
	}
	
	return avg;
}

void DelAll(List *L)
{
	infotype X;
	
	while (!ListEmpty(*L))
	{
		DelVFirst(&(*L), &X);
	}
}

void InversList(List *L)
{
	List LTemp;
	address P;
	
	CreateList(&LTemp);
	
	while (First(*L) != Nil)
	{
		DelFirst(&(*L), &P);
		Next(P) = Nil;
		InsertFirst(&LTemp, P);
	}
	
	First(*L) = First(LTemp);
}

List FInversList(List L)
{
	List LB;
	address P, PB;
	infotype X;

	P = First(L);
	CreateList(&LB);
	
	do
	{
		X = Info(P);
		PB = Alokasi(X);
		if (PB != Nil) {
			InsertLast(&LB, PB);
			P = Next(P);
		} else {
			DelAll(&LB);
			First(LB) = Nil;
		}
	} while (P != Nil);
	
	return LB;
}

void CopyList(List L1, List *L2)
{
	*L2 = L1;
}


void CpAlokList(List Lin, List *Lout)
{
	address P, Pout;
	infotype X;

	if (!ListEmpty(Lin))
	{
		CreateList(&(*Lout));
		P = First(Lin);
		
		do
		{
			X = Info(P);
			Pout = Alokasi(X);
			if (Pout != Nil) {
				InsertLast(&(*Lout), Pout);
				P = Next(P);
			} else {
				DelAll(&(*Lout));
				First(*Lout) = Nil;
				
				break;
			}
		} while (Next(P) != Nil);
	}
}

void konkat(List L1, List L2, List *L3)
{
	address P1, P2, P3;
	infotype X1, X2;

	CreateList(&(*L3));

	P1 = First(L1);
	
	do
	{
		X1 = Info(P1);
		P3 = Alokasi(X1);
		
		if (P3 != Nil) {
			InsertLast(&(*L3), P3);
			P1 = Next(P1);
		} else {
			DelAll(&(*L3));
			First(*L3) = Nil;
			
			break;
		}
	} while (Next(P1) != Nil);

	P2 = First(L2);
	
	do
	{
		X2 = Info(P2);
		P3 = Alokasi(X2);
		if (P3 != Nil) {
			InsertLast(&(*L3), P3);
			P2 = Next(P2);
		} else {
			DelAll(&(*L3));
			First(*L3) = Nil;
			break;
		}
	} while (Next(P2) != Nil);
}

void Konkat1(List *L1, List *L2, List *L3)
{
	address P1, P2, P3;
	infotype X1, X2, X3;

	CreateList(&(*L3));

	while (First(*L1) != Nil)
	{
		DelFirst(&(*L1), &P1);
		InsertLast(&(*L3), P1);
	}

	while (First(*L2) != Nil)
	{
		DelFirst(&(*L2), &P2);
		InsertLast(&(*L3), P2);
	}
}

void PecahList(List *L1, List *L2, List L)
{
	address P, P1, P2;
	infotype X1, X2;

	int Nb, tengah;

	if (!ListEmpty(L)) {
		CreateList(&(*L1));

		if (NbElmt(L) == 1) {
			First(*L1) = First(L);
		} else {
			tengah = NbElmt(L) / 2;
			P = First(L);
			Nb = 1;

			do
			{
				X1 = Info(P);
				P1 = Alokasi(X1);
				
				if (P1 != Nil) {
					InsertLast(&(*L1), P1);
					P = Next(P);
					Nb++;
				} else {
					DelAll(&(*L1));
					First(*L1) = Nil;
					
					break;
				}
			} while (Nb <= tengah);

			do
			{
				X2 = Info(P);
				P2 = Alokasi(X2);
				if (P2 != Nil) {
					InsertLast(&(*L2), P2);
					P = Next(P);
				} else {
					DelAll(&(*L2));
					First(*L2) = Nil;
					break;
				}
			} while (Next(P) != Nil);
		}
	} else {
		printf("List tidak dapat dipecah ! Kosong !\n");
	}
}
