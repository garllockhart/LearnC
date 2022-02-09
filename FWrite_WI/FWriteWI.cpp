/*
Nama File		: 
Deskripsi		: 
Dibuat Oleh		: 
Tanggal Dibuat	: 
Diedit Oleh		: Garly Nugraha
Tanggal Diedit	: 16/12/2021
*/

#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h> 

#define JUM_BLOK 1

int main(void) { 
    FILE *f_dtbuku; 
    char jawab; 
    struct data_buku{ 
        char judul[26]; 
        char pengarang[30]; 
        int jumlah; 
    }buku;
    
    if ((f_dtbuku = fopen("BUKU.DAT","wb")) == NULL ) 
    { 
        printf("File tidak dapat dibuat!\r\n"); 
        exit(1); 
    } 

    do { 
        system("cls");
        
        printf("Judul buku : "); fflush(stdin); 
        gets(buku.judul); 
        
        printf("Nama pengarang : "); fflush(stdin); 
        gets(buku.pengarang); 
        
        printf("Jumlah : "); fflush(stdin); 
        scanf("%d",&buku.jumlah); 
        
        fwrite(&buku, sizeof(buku), 1, f_dtbuku); 

        printf("\r\nMemasukkan data lagi (Y/T)? ");fflush(stdin); 
        jawab = toupper(getche());
    }    

    while (jawab == 'Y'); 
        fclose(f_dtbuku);
        printf("\r\nData sudah disimpan pada file.\r\n"); 
        printf("\r\nLihat isi file (Y/T)? ");fflush(stdin); 
        jawab = toupper(getche());
        
        if (jawab == 'Y') 
        {
            if ( (f_dtbuku=fopen("BUKU.DAT","rb")) == NULL ) 
            { 
                printf("File tidak dapat dibuka!\r\n"); 
                exit(1); 
            } 
            printf("\n"); 

            while ( (fread(&buku, sizeof(buku), JUM_BLOK, f_dtbuku)) == JUM_BLOK ) 
            printf("%-26s %-20s %2d\r\n", buku.judul, buku.pengarang, buku.jumlah); 
            fclose(f_dtbuku);
        } 
    return 0; 
} 
