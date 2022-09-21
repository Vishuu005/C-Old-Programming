#include<stdio.h>
void cube();
void main() 
{ 
char f;
printf("enter name:");
scanf("%s",&f);
cube();
}
void cube()
{
int a,b;
printf("enter value:");
scanf("%d",&a);
b=a*a*a;
printf("cube:%d",b);
}






void a();
void main()
{
	printf("loop of array using fuction");
	void a();
}
void a()
{
	int b[2][2];
	 b[0][0]=10
	 b[0][1]=20
	 b[1][0]=30
	 b[1][1]=40
	 
	 int i ,j;
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		printf("%d",b[i][j]);
		 }
		 printf("\n")
	 }
	 
	 
}
