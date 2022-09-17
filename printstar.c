//#include<stdio.h>
//int i,j;
//for(i=1;i<=5;i++)
//{
//	
//	for(j=1; j<=i; j++)
//	{
//		printf("*");
//	}
//	    printf("\n");
//}
// return 0;
//}


#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0; i<=4; i++)
	{
		     for(j=4; j>i; j--)
		           printf(" ");
		      
			 for(k=0; k<=i; k++) 
			 {
			 	if(k%2==0)
			 	       printf("*");
			 	   else
					   printf("*"); 
				  } 
				  printf("\n");    
	}
	return 0;
}
