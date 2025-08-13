#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200];
    int i, count = 0, length = 0, maxLength = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ' ' || str[i] == '\n') 
		{
            count++;
            if (length > maxLength) 
			{
                maxLength = length;
                maxStart = start;
            }
            length = 0;
            start = i + 1;
        } 
        else 
		{
            length++; // current word ka length badhao
        }
    }

    // Last word check (kyunki uske baad space nahi hota)
    if (length > 0) 
	{
        count++;
        if (length > maxLength) 
		{
            maxLength = length;
            maxStart = start;
        }
    }

    printf("Number of words: %d\n", count);
    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLength; i++) 
	{
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

