#include <stdio.h>

int fibona(int n)
 {
    if (n == 0) 
	{
		return 0;
	}
    if (n == 1)
	 {
	 	return 1;
	 }
    return fibona(n - 1) + fibona(n - 2);
}

int main() 
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter N: ");
    scanf("%d", &n);

    
    printf("\nFibonacci sequence (Recursive): ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", fibona(i));
    }

    
    a = 0;
    b = 1;
    for (i = 2; i <= n; i++) 
	{
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nNth Fibonacci (Iterative): %d\n", a);

    return 0;
}

