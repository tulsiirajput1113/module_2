#include<stdio.h>
main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

//even and odd
    if (num % 2 == 0)
	{
        printf("The number is even.\n");
    } 
	else 
	{
        printf("The number is odd.\n");
    }
    
    
//positive,nagetive
    if (num > 0)
	{
        printf("The number is positive.\n");
    } 
	else if (num < 0) 
	{
        printf("The number is negative.\n");
    } 
	else 
	{
        printf("The number is zero.\n");
    }

    // Check if multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0)
	{
        printf("The number is a multiple of both 3 and 5.\n");
    } 
	else 
	{
        printf("The number is not a multiple of both 3 and 5.\n");
    }

    return 0;
}


