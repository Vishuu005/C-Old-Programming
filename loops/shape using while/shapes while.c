#include<stdio.h>
int main()
{
//	int i=1;
// while (i<=5)
// {
// 	int j=i;
// 	while(j<=5)
// 	{
// 		printf("*",j);
// 		j++;
//	 }
// 	
// 	printf("\n",i);
// 	i++;
// 	
 	
	 int i=1;
	 while(i<=5)
	 {
	 	int j=i;
	 	while(j<=5)
	 	{
	 		printf(" ",j);
	 		j++;
		 }
		 int k=1;
		 while(k<=i)
		 {
		 	printf("* ",k);
		 	k++;
		 }
		 
		 printf("\n",i);
		 i++;
	 
	}
	
	
	int a=1;
	while(a<=5)
	{
		int b=1;
		while(b<=a)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

