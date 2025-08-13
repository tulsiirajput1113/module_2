#include <stdio.h>

int main() 
{
    int num, sum = 0, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) 
	{
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reverse of number: %d\n", reverse);

    return 0;
}

