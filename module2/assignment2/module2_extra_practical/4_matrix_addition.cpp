#include <stdio.h>

int main() 
{
    int i, j;
    int a2[2][2], b2[2][2], sum2[2][2];

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            scanf("%d", &a2[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            scanf("%d", &b2[i][j]);
        }
    }

    // Addition
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            sum2[i][j] = a2[i][j] + b2[i][j];
        }
    }

    printf("Resultant 2x2 Matrix (Addition):\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", sum2[i][j]);
        }
        printf("\n");
    }

    // 3x3 Matrix Multiplication
    int a3[3][3], b3[3][3], mul3[3][3] = {0};

    printf("\nEnter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &a3[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &b3[i][j]);
        }
    }

    // Multiplication
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            for (int k = 0; k < 3; k++) 
			{
                mul3[i][j] += a3[i][k] * b3[k][j];
            }
        }
    }

    printf("Resultant 3x3 Matrix (Multiplication):\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", mul3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

