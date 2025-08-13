#include <stdio.h>

int main() {
    int n, i, isPrime;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &n);

    if (n <= 1) 
	{
        printf("%d is not a prime number.\n", n);
    } 
	else 
	{
        isPrime = 1; 
        for (i = 2; i <= n / 2; i++) 
		{
            if (n % i == 0) 
			{
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    int limit;
    printf("\nEnter the limit to print all prime numbers: ");
    scanf("%d", &limit);

    printf("Prime numbers between 1 and %d are: ", limit);
    for (n = 2; n <= limit; n++) 
	{
        isPrime = 1; 
        for (i = 2; i <= n / 2; i++) 
		{
            if (n % i == 0) 
			{
                isPrime = 0; 
                break;
            }
        }
        if (isPrime == 1)
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}

