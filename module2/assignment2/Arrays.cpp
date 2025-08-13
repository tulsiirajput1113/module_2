#include<stdio.h>
void print(int arr[],int n);

main()
{
	int arr[]={1,2,3,4,5};
	print(arr,5);
	
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d : %d\n",i,arr[i]);
		
	}
	
}
