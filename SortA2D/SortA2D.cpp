/*
Nama File		: modular.cpp
Deskripsi		: 
Dibuat Oleh		: SN, TCWin++ 4.5
Tanggal Dibuat	: 21/10/2013
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 02/12/2001
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define baris 10
#define kolom 9

int i, j;

void FillArray(int A[baris][kolom])
{
	rand();
	cout<<"Matriks sebelum di lakukan sorting \n"<<endl;
	for(i=0;i<baris;i++){
		for(j=0;j<kolom;j++){
			A[i][j]=rand()%100;
			cout<<A[i][j]<<" ";
		} cout<<endl;
	}
	printf("\n");
}

void tukar (int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void RowSort(int A[baris][kolom], int brs, int klm)
{
	int k;
	for(i = 0; i < brs; i++)
	{
		for(j = 0; j < klm-1; j++)
		{
			for(k=j+1;k<klm;k++)
			{
				if(A[i][j]>A[i][k])
				{
					tukar(&A[i][j],&A[i][k]);
				}
			}
		}
	}
}

void ColumnSort(int A[baris][kolom], int brs, int klm)
{
	int k;
	//proses pengurutan angka pada kolom
	for(j = 0; j < klm; j++)
	{
		for(i = 0; i < brs-1; i++)
		{
			for(k = i + 1;k < brs; k++)
			{
				if(A[i][j]>A[k][j])
				{
					tukar(&A[i][j], &A[k][j]);
				}
			}
		}
	}
}

void ShowArray(int A[baris][kolom], char ket[5]){
	printf("\n");
	printf("Matriks setelahh di Sort per %s \n\n", ket);
	for(i = 0;i < baris;i++){
		for(j = 0;j < kolom;j++){
			cout<<A[i][j]<<" ";
		}cout<<endl;
	}
}

int main()
{
	int x[baris][kolom];
	FillArray(x);
	RowSort(x,baris,kolom);
	ShowArray(x,"baris");
	ColumnSort(x,baris,kolom);
	ShowArray(x,"kolom");
	return 0;
}
