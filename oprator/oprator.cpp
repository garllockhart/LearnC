/*
Nama File		: oprator.c
Deskripsi		: Contoh pengoperasian variabel bertype dasar
Dibuat Oleh		: Dosen DDP / 132 231 592
Tanggal Dibuat	: 30/08/2001
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 17/11/2021
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
//	Kamus Data
	bool Bool1, Bool2, TF;
	int i, j, hsl;
	float x, y, res;
	
//	Program
	printf("Untuk program ini, baca teksnya dan tambahkan output \n");
	Bool1 = true;
	Bool2 = false;
	printf("Bool1 = %d ", Bool1, " dan Bool2 = %d \n", Bool2);
	TF = Bool1 && Bool2;
	printf("TF = Bool1 Or Bool2 : %d \n", TF);
	TF = Bool1 || Bool2;
	printf("TF = Bool1 Or Bool2 : %d \n", TF);
	TF = ! Bool1;
	printf("TF = Not Bool1 : %d \n", TF);
	TF = Bool1 ^ Bool2;
	printf("TF = Bool1 Xor Bool2 : %d \n", TF);
	
//	Operasi Numerik
	x = 5.0; y = 2.0;
	printf("Nilai x = %f", x, " dan Nilai y = %f\n", y);
	res = x + y;
	printf("Hasil operasi x + y : adalah %f\n", res);
	res = x - y;
	printf("Hasil operasi x - y : adalah %f\n", res);
	res = x / y;
	printf("Hasil operasi x / y : adalah %f\n", res);
	res = x * y;
	printf("Hasil operasi x * y : adalah %f\n", res);
	
//	Operasi relasional numerik
	printf("Karena nilai i = %d", i, " dan nilai j = %d", j, "Maka \n");
	TF = (i == j);
	printf("Hasil Operasi TF = (i == j) adalah %d\n", TF);
	TF = (i != j);
	printf("Hasil Operasi TF = (i != j) adalah %d\n", TF);
	TF = (i < j);
	printf("Hasil Operasi TF = (i < j) adalah %d\n", TF);
	TF = (i > j);
	printf("Hasil Operasi TF = (i > j) adalah %d\n", TF);
	TF = (i <= j);
	printf("Hasil Operasi TF = (i <= j) adalah %d\n", TF);
	TF = (i >= j);
	printf("Hasil Operasi TF = (i >= j) adalah %d\n", TF);
	
//	Operasi relasional numerik
	printf("Karena nilai x = %f", x, " dan nilai y = %f", y, "Maka \n");
	TF = (x != y);
	printf("Hasil Operasi TF = (x != y) adalah %f\n", TF);
	TF = (x < y);
	printf("Hasil Operasi TF = (x < y) adalah %f\n", TF);
	TF = (x > y);
	printf("Hasil Operasi TF = (x > y) adalah %f\n", TF);
	TF = (x <= y);
	printf("Hasil Operasi TF = (x <= y) adalah %f\n", TF);
	TF = (x >= y);
	printf("Hasil Operasi TF = (x >= y) adalah %f\n", TF);
}
