#include <stdio.h>

int fibonacci(int J)
{
	if (J == 0 || J == 1)
	{
        return J;
    } else 
	{
        return (fibonacci(J - 1) + fibonacci(J - 2));
    }
}
 
int main()
{
	int I, J = 0, K;
	
	printf("==================== Fibonacci ====================");
	printf("\n\n");
	
	printf("Inputkan Bilangan Fibonacci : ");
	scanf("%d ", &I);
	
	printf("\n\n");
    
    printf("Deret Fibonacci : ");
    for (K = 1; K <= I; K++){
        printf("%d ", fibonacci(J));
        J++;
    }
    
	return 0;
}
