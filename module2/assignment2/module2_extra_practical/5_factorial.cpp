#include<stdio.h>

// Recursive method
int fact_recursive(int num) 
{
    if(num == 0)
        return 1;
    return num * fact_recursive(num - 1);
}

// Iterative method
int fact_iterative(int num) 
{
    int fact = 1;
    for(int i = 1; i <= num; i++) 
	{
        fact = fact * i;
    }
    return fact;
}

int main() 
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num < 0) 
	{
        printf("Factorial of a negative number is not defined.\n");
    } 
	else 
	{
        printf("Factorial using Recursive method: %d\n", fact_recursive(num));
        printf("Factorial using Iterative method: %d\n", fact_iterative(num));
    }

    return 0;
}

