#include<stdio.h>
#include<string.h>



struct student
{
	char name[100];
	int roll;
	float marks;
};

int main()
{
	
	 struct student IT[60];
	 
	 
	 strcpy(IT[0].name,"tulsi");
	 IT[0].roll =54;
	 IT[0].marks=78.55;
	 
	 printf(" name is:-%s\n",IT[0].name);
	 printf(" roll is:-%d\n",IT[0].roll);
	 printf(" marks is:-%f\n",IT[0].marks);
	 printf("\n");
	 
	 strcpy(IT[1].name,"jinal");
	 IT[1].roll =44;
	 IT[1].marks=76.55;
	 
	 
	 printf(" name is:-%s\n",IT[1].name);
	 printf(" roll is:-%d\n",IT[1].roll);
	 printf(" marks is:-%f\n",IT[1].marks);
	 printf("\n");
	 
	 strcpy(IT[2].name,"priya");
	 IT[2].roll =50;
	 IT[2].marks=73.55;
	 
	 printf(" name is:-%s\n",IT[2].name);
	 printf(" roll is:-%d\n",IT[2].roll);
	 printf(" marks is:-%f\n",IT[2].marks);
	 
	 
}

