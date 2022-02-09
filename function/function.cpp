/*
Nama File		: function.cpp
Deskripsi		: Mengubah operasi bagi menjadi  operasi pengurangan
Dibuat Oleh		: Dosen DDP
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 19/11/2021
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

//	Prototype
void bagi(int b,int p, int *h, int *s);
void inputan(int *b,int *p);
int FunctionInputBilangan(int b);
int FunctionInputPembagi(int p);
int FunctionBagiNilai(int b,int p);


//	Program Main
int main ()
{

	int bilangan,pembagi,hasil,sisa;
	char pilih;
	do
	{
		//clrscr;
		system("cls");
		hasil=0;
		sisa=0;
		
//		Pemanggilan Prosedur
		inputan (&bilangan,&pembagi);

//		Pemanggilan Function
//		bilangan = FunctionInputBilangan(bilangan);
//		pembagi = FunctionInputPembagi(pembagi);

		if (pembagi == 0)
			printf ("Tidak Terdefinisi.. Nilai Pembagii tidak boleh sama dengan nol");
		else
		{
//			Pemanggilan Prosedur
			bagi (bilangan,pembagi,&hasil,&sisa);
			
//			Pemanggilan Function
//			hasil = FunctionBagiNilai(bilangan,pembagi);

			printf ("\n\n Main program Hasil bagi adalah = %d",hasil);
			printf ("\n Main program Sisa adalah = %d",sisa);
		}
		printf ("\n\n Ulangi proses ? (Y / T) ");
		//scanf ("%c",&pilih);
		pilih=getche();
	} while ((pilih=='Y') || (pilih=='y'));
	
	return 0;
}

//	Function Input Bilangan
int FunctionInputBilangan(int b)
{
	printf("\n Masukkan nilai bilangan = ");
	scanf("%d", &b);
	
	return b;
}

//	Function Input Pembagi
int FunctionInputPembagi(int p)
{
	printf("\n Masukkan nilai pembagi = ");
	scanf("%d", &p);
	
	return p;
}

//	Funtion Bagi Nilai
int FunctionBagiNilai (int b,int p)
{
	int h = 0;
	int s = 0;
	int bp,bm;  //bp = penampung nilai pembagi, bm = penampung nilai bilangan 
	bp=p;
	bm=b;
	if (b==0)
	  h=0;
	else
	{
		if (b<0)
			bm=-b;
		if (p<0)
			bp=-p;

		s=bm;

		if(bm<bp)
			h=0;

		while (s>=bp)
		{
			s=(s)-bp;
			h=(h)+1;
		}
	}

	if ((p<0) || (b<0))
	{
		if ((p<0) && (b<0))
			h=h;
		else
		{
			h=-(h);
			s=-(s);
		}	
	}
	
	return h;
}

//	Modul Inputan
void inputan (int *b,int *p)
{
	printf("\n Masukkan nilai bilangan = ");
	scanf("%d", &*b);

	printf("\n Masukkan nilai pembagi = ");
	scanf("%d", &*p);
}

//	Modul Bagi
void bagi (int b,int p,int *h,int *s)
{
	int bp,bm;  //bp = penampung nilai pembagi, bm = penampung nilai bilangan 
	bp=p;
	bm=b;
	if (b==0)
	  *h=0;
	else
	{
		if (b<0)
			bm=-b;
		if (p<0)
			bp=-p;

		*s=bm;

		if(bm<bp)
			*h=0;

		while (*s>=bp)
		{
			*s=(*s)-bp;
			*h=(*h)+1;
		}
	}

	if ((p<0) || (b<0))
	{
		if ((p<0) && (b<0))
			*h=*h;
		else
		{
			*h=-(*h);
			*s=-(*s);
		}	
	}
}


