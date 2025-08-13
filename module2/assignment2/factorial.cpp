#include<stdio.h>
int fact( int num);

int main()
{
	
	int num;
	printf("enter the number:-");
	scanf("%d",&num);
	
	printf("%d",fact(num));
	
	
}

int fact(int num)
{
	
	if(num == 0)
	{
		
		return 1;
	}
	
	int factnm1=fact(num-1);
	int factn=factnm1*num;
	return factn;
}
