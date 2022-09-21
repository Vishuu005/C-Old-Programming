#include<stdio.h>
int main(){
	


	
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=i;j<=5;j++)
//		{
//		printf("*",j);
//	    }
//	printf("\n",i);    
//	}
//	
//	
//		int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//		printf("*",j);
//	    }
//	printf("\n",i);    
//	}
//	
	
//		int i,j,k;
//	for(i=1;i<=5;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//		printf(" ",j);
//	    }
//	    for(k=i;k<=5;k++)
//	    {
//	    	printf("*",k);
//		}
//	printf("\n",i);    
//	}
//	
//	
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		//not able to understand the values(j=i,j<=i)
		//not able to inter relate values 
		//where will be space and where will be *******??????????
		//diff. b\w post increment and pre increment???????
		{
		printf(" ",j);
	    }
	    for(k=1;k<=i;k++)
	    {
	    	printf("*",k);
		}
	printf("\n",i);    
	}
}
