#include<stdio.h>
int main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age<=3)
	{
	printf("you are not eligible to watch movie");
	}
	else if(age>3&&age<=12)
	{
		printf("you are eligible to watch u category movie");
	}
	else if(age>12&&age<=18)
	{
	printf("you are eligible to watch ua category movies");
	}
	else if(age>18&&age<=65)
	{
		printf("you are eligible to watch a category movies");
	}
	else
	{
		printf("not eligible for anything");
	}
	return 0;
}
