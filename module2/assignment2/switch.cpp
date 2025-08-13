#include<stdio.h>

main()
{
	
	int num,ch;
	
	printf("enter your choice number:-");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("number is even ");
	}
	else
	{
		 printf("number is odd");
	}
	
	printf("\n");
	printf("\n");
	
	printf("enter your choice 1 to 12:-");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("moth is january");
				break;
		case 2: printf("month is february");
				break;
		case 3: printf("month is march");
				break;
		case 4: printf("month is april");
				break;
		case 5: printf("month is may");
				break;
		case 6: printf("month is june");
				break;
		case 7: printf("month is july");
				break;
		case 8: printf("month is august");
				break;
		case 9: printf("month is september");
				break;
		case 10: printf("month is october");
				break;
		case 11: printf("month is november");
				break;
		case 12: printf("moth is december");
				break;
				default: printf("invalid input");
	}
	
}
