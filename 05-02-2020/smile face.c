#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;1<=10;i++)
	{
		if(i%3==0&&i<=3)
		{
			for(j=1;j<=11;j++)
			{
				if(j%4==0)
				{
					printf("@");
					continue;
				}
				printf("*");
				printf(" ");
				continue;
			}
			if(i%6==0&&i<=6)
			{
				for(j=1;j<=11;j++)
			{
				if(j%6==0&&i<=6)
				{
					printf("0");
					continue;
				}
				printf("*");
			}
			printf("<<");
			continue;
			}
		}
	}
}
