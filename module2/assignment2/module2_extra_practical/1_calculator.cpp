#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

main()
{
	int a,b;
	char c;
	
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("enter your Operator(+,-,*,/):");
	scanf(" %c",&c);
	
	switch(c)
	{
		case '+':
			printf("Ans of arithmatic:%d\n",sum(a,b));
			break;
		case '-':
			printf("Ans of subtraction:%d\n",sub(a,b));
			break;
		case '*':
			printf("Ans of multiplication:%d\n",mul(a,b));
			break;
		case '/':
			printf("Ans of division:%d\n",div(a,b));
			break;
		default:
			printf("invalid input");
			
	}
}
int sum(int a,int b)
{
	int sum=a+b;
	return sum;	
}
int sub(int a,int b)
{
	int sub=a-b;
	return sub;
}
int mul(int a,int b)
{
	int mul=a*b;
	return mul;	
}
int div(int a,int b)
{
	int div=a/b;
	return div;
}
