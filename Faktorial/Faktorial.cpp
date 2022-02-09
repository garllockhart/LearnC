#include<stdio.h>

int rekursif(int nilai){
	if(nilai == 0){
		return 1;
	}else{
		return nilai * rekursif(nilai - 1);
	}
}

int main(){
	int bilangan;
	
	printf("==================== Faktorial ====================");
	printf("\n\n");
	
	printf("Masukkan Bilangan ke-N = ");
	scanf("%d", &bilangan);
	
	printf("\n");
	
	printf("Bilangan %d = Faktorial %d", bilangan, rekursif(bilangan));
	
	return 0;
}
