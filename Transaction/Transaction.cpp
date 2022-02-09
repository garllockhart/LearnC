/*
Nama File		: TransactionBarang.cpp
Deskripsi		: 
Dibuat Oleh		: Garly Nugraha
Tanggal Dibuat	: 17/11/2021
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
//	Kamus Data
	struct Mahasiswa{
		char *NIM, *NamaMahasiswa;
	};
	Mahasiswa DataMahasiswa[3];
	
	struct Barang{
		int IDBarang, HargaBarang, JumlahStock;
		char *NamaBarang;
	};
	Barang DataBarang[3][3];
	
	int A, B, C, D;
	
	struct Transaksi{
		char *NIM;
		int IDBarang, JumlahBeli;
	};
	Transaksi DataTransaksi[3];
	
//	Program Input Data Mahasiswa
	printf("========== Input Data Mahasiswa ==========");
	printf("\n\n");
	A = 0;
	while(A <= 2){
		printf("NIM : ");
		DataMahasiswa[A].NIM=(char*)malloc(9 * sizeof(char));
		scanf("%s", DataMahasiswa[A].NIM);
		printf("Nama Mahasiswa : ");
		DataMahasiswa[A].NamaMahasiswa=(char*)malloc(40 * sizeof(char));
		scanf("%s", DataMahasiswa[A].NamaMahasiswa);
		A++;
	}
	
//	Program Output Data Mahasiswa
	printf("========== Output DATA MAHASISWA ==========");
	printf("\n\n");
	A = 0;
	while(A <= 2){
		printf("NIM : %s \n", DataMahasiswa[A].NIM);
		printf("Nama Mahasiswa : %s \n", DataMahasiswa[A].NamaMahasiswa);
		A++;
	}

	printf("\n\n");
	
//	Program Input Data Barang
	printf("========== Input Data Barang ==========");
	printf("\n\n");
	B = 0;
	while(B <= 2){
		A = 0;
		while(A <= 2){
			printf("ID Barang : ");
			scanf("%d", &DataBarang[A][B].IDBarang);
			printf("Nama Barang : ");
			DataBarang[A][B].NamaBarang=(char*)malloc(50 * sizeof(char));
			scanf("%s", DataBarang[A][B].NamaBarang);
			printf("Harga : ");
			scanf("%d", &DataBarang[A][B].HargaBarang);
			printf("Jumlah Stock : ");
			scanf("%d", &DataBarang[A][B].JumlahStock);
			printf("\n");
			A++;
		}
		B++;
	}

//	Program Output Data Barang
	printf("========== Output Data Barang ==========");
	printf("\n\n");
	B = 0;
	while(B <= 2){
		A = 0;
		while(A <= 2){
			printf("%d", DataBarang[A][B].IDBarang);
			printf(" ");
			printf("%s", DataBarang[A][B].NamaBarang);
			printf(" ");
			printf("%d", DataBarang[A][B].HargaBarang);
			printf(" ");
			printf("%d", DataBarang[A][B].JumlahStock);
			printf(" | ");
			A++;
		}
		B++;
	}

	printf("\n\n");
	
//	Program Input Transaksi

	
//	Program Output Traksaksi

	return 0;
}
