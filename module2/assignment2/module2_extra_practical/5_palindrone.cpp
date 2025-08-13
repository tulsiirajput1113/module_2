#include <stdio.h>
#include <string.h>

int isNumberPalindrome(int num) 
{
    int original = num, reversed = 0, digit;
    while (num > 0) 
	{
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}

// Function to check string palindrome
int isStringPalindrome(char str[]) 
{
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) 
	{
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main() 
{
    int num;
    char str[100];

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNumberPalindrome(num))
        printf("Number is Palindrome.\n");
    else
        printf("Number is NOT Palindrome.\n");

    printf("Enter a string: ");
    scanf("%s", str);

    if (isStringPalindrome(str))
        printf("String is Palindrome.\n");
    else
        printf("String is NOT Palindrome.\n");

    return 0;
}

