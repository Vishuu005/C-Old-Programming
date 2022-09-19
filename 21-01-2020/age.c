#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>18&&age<60)
	{
		printf("yes you can vote");
	}
	else
	{
		if(age>60&&age<150)
		{
		printf("u cannot vote");
		}
		else
		{
		printf("wrong age");
	}
	}
	return 0;
}
