
#include<stdio.h>
int main()
{
//	int a,b=0,c=0;
//    for(a=1;a<=10;a++)
//    {
//    	b=b+a;
//    	c=c+b+a;
//    	printf(" value of a is %d \t and value of b is %d \t value of c is %d \n\n",a,b,c);
//	}

//int a,b,c;
//for(a=1,b=1,c=1;a<=10;a++,b+=a,c=c+b+a)
//{
//	printf("value of a %d \t value of b %d \t and value of c %d \n\n",a,b,c);
//	
//}

// int a ;
// for(a=0;a<=10;++a)//difference b\w post increment and pre increment(results r same)
// {
// 	printf("%d\n\n",a);
// }

char c;
do
{
	printf("\t do while loop \n");
	printf("y for print \t n for stop:");
	scanf("%c,&c");
}
while(c=='y');
{
	printf("do while looooooop");
}

// int i,k;
// for (i=5,k=120;i>=1;i--,k/=i+1)
//{
//	printf("value of i %d \t value of k %d\n\n",i,k);
//}

return 0;
}
