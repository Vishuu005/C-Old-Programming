#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<10;j++)
		{
			printf(" ");
	}
		for(k=1;k<(i*2);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
