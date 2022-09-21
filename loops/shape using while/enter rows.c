#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the no. of rows:");
	scanf("%d",&a);
	e=a;
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=e;c++)
		{
			printf(" ");
		}
		e--;
		for(d=1;d<=b;d++)
		{
			printf("* ",b);
		}
		printf("\n");
    }

}

