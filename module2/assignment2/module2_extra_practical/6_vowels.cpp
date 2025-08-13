#include <stdio.h>
#include <string.h> 

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str); 

    length = strlen(str); 

    for (i = 0; i < length; i++) 
	{
        char ch = str[i];

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
		{
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
		{
            consonants++;
        }
        else if (ch >= '0' && ch <= '9')
		{
            digits++;
        }
        else 
		{
            special++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d\n", special);

    return 0;
}

