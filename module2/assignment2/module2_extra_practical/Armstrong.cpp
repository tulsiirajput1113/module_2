#include <stdio.h>

int main() 
{
    int num, sum = 0, temp, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) 
	{
        digit = temp % 10;
        sum += digit * digit * digit; 
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
    printf("\nArmstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++)
	 {
        int t = i, s = 0;
        while (t > 0)
		{
            digit = t % 10;
            s += digit * digit * digit;
            t /= 10;
        }
        if (s == i) 
		{
            printf("%d ", i);
        }
    }

    return 0;
}

