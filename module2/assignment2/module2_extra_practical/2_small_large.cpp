#include<stdio.h>
int main()
{
	//using if-else
	
//   	int a, b, c;
//    int largest, smallest;
//    
//    printf("Enter three numbers:\n");
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a >= b && a >= c) 
//	{
//        largest = a;
//    }
//	else if (b >= a && b >= c) 
//	{
//        largest = b;
//    } 
//	else 
//	{
//        largest = c;
//    }
//
//    if (a <= b && a <= c) 
//	{
//        smallest = a;
//    } 
//	else if (b <= a && b <= c) 
//	{
//        smallest = b;
//    } 
//	else 
//	{
//        smallest = c;
//    }
//    printf("Largest number: %d\n", largest);
//    printf("Smallest number: %d\n", smallest);
	
	//using switch-case
	
    int a, b, c;
    int largest, smallest;
    int code_largest, code_smallest;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        code_largest = 1;
    } else if (b >= a && b >= c) {
        code_largest = 2;
    } else {
        code_largest = 3;
    }

    switch (code_largest)
	{
        case 1:
            largest = a;
            break;
        case 2:
            largest = b;
            break;
        case 3:
            largest = c;
            break;
    }

    if (a <= b && a <= c) 
	{
        code_smallest = 1;
    } 
	else if (b <= a && b <= c) 
	{
        code_smallest = 2;
    } 
	else 
	{
        code_smallest = 3;
    }

    switch (code_smallest) 
	{
        case 1:
            smallest = a;
            break;
        case 2:
            smallest = b;
            break;
        case 3:
            smallest = c;
            break;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
