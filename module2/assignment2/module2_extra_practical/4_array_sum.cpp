#include <stdio.h>

int main() 
{
    int n, i,avg;
    int arr[100];  
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
        sum =sum+ arr[i];  
    }

    printf("Sum of all elements = %d\n", sum);

	avg=sum/n;
	printf("average of all elements = %d\n", avg);

    return 0;
}

