#include<stdio.h>
int sum();
void main()
{
	int result;
	printf("print sum of two no.s\n");
	result=sum();
	printf("%d",result);
}
int sum()
{
	int a,b;
	printf("enter values:");
	scanf("%d %d",&a,&b);
	return a+b;
}
