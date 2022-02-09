#include <stdio.h>
#include <conio.h>

int main(){
	int value1[] = {3, 2, 9, 4, 8, 7};
	int value2[] = {1, 6, 9, 5, 3, 4};
	int Merging[12];
	int Trash;
	int A;
	int B;
	int C;
	int D;
	int E;

	printf("Data Merging : ");
	for(A = 0; A < 6; A++){
		Merging[A] = value1[A];
		Merging[6 + A] = value2[A];
	}
	
	for(B = 0; B < 12; B++){
		printf("%d ", Merging[B]);
	}
	
	printf("\n");

	printf("Data Sort : ");
	for(C = 0; C < 12; C++){
		for(D = 0; D < 11; D++){         
			if (Merging[D] > Merging[D + 1]){  
				Trash = Merging[D];         
				Merging[D] = Merging[D + 1];   
				Merging[D + 1] = Trash;       
			}
		}
	}
	
	for(E = 0; E < 12; E++){
		printf("%d ", Merging[E]);
	}
	
	getch();
	return 0;
}
