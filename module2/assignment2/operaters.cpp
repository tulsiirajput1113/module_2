#include<stdio.h>

main()
{
	
	 int n1,n2,total;
	 
	 printf("enter first value:");
	 scanf("%d",&n1);
	 
	 printf("enter second value:");
	 scanf("%d",&n2);
	 
	// airthmetic ope
	
	 printf("sum of :- %d\n",n1+n2);
	 printf("sub of :- %d\n",n1-n2);
	 printf("mul of :- %d\n",n1*n2);
	 printf("div of :- %d\n",n1/n2);
	 printf("\n");
	 
	 //post 
     printf("valur is :%d\n",n1++);
	 printf("after post increment%d",n1);
	 printf("\n");
	 printf("\n");
	 
	 //pre
	 printf("value is :%d\n",++n1);
	 printf("after pre increment %d",n1);
	 printf("\n");
	 printf("\n");
	 
	 //post
	 
	 printf("valur is :%d\n",n2--);
	 printf("after post decrement%d",n2);
	 printf("\n");
	 printf("\n");
	 
	 //pre
	 printf("value is :%d\n",--n2);
	 printf("after pre decrement%d",n2);
	 
	 printf("\n");
	 printf("\n");
	 
	 // relational ope
	 
	 printf(" ans of < :%d\n",n1<n2);
	 printf(" ans of >:%d\n",n1>n2);
	 printf(" ans of <= :%d\n",n1<=n2);
	 printf(" ans of >= :%d\n",n1>=n2);
	 printf(" ans of == :%d\n",n1==n2);
     printf(" ans of != :%d\n",n1!=n2);
     printf("\n");
     printf("\n");

	 // logical ope
	 
	 printf("ans is :%d\n",n1>n2 && n2<n1);
     printf("ans is :%d\n",n1<n2 && n2<n1);
     printf("ans is :%d\n",n1>n2 && n2>n1);
     printf("ans is :%d\n",n1<n2 && n2>n1);
     printf("\n");
     printf("\n");
  
 	 printf("ans is :%d\n",n1>n2 || n2<n1);
  	 printf("ans is :%d\n",n1>n2 || n2<n1);
  	 printf("ans is :%d\n",n1>n2 || n2<n1);
  	 printf("ans is :%d\n",n1>n2 || n2<n1);
  	 printf("\n");
  	 printf("\n");
 
 	 printf("ans is :%d\n",!(n1>n2 || n2<n1));
 	 printf("ans is :%d",!(n1>n2 || n2<n1));
	 
	
	 
}
