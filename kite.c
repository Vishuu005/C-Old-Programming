#include <stdio.h>
int main()
{
  int n, c, k, space = 1;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  space = n - 1;

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space--;

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  space = 1;

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");

    space++;

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }

  return 0;
}










//
//
//
//
//#include <stdio.h>
//int main()
//{
//  int n, c, k, space = 1;
//
//  printf("Enter number of rows\n");
//  scanf("%d", &n);
//
//  space = n - 1;
//
//  for (k = 1; k <= n; k++)
//  {
//    for (c = 1; c <= space; c++)
//      printf(" ");
//
//    space--;
//
//    for (c = 1; c <= 2*k-1; c++)
//      printf("*");
//
//    printf("\n");
//  }
//
//  space = 1;
//
//  for (k = 1; k <= n - 1; k++)
//  {
//    for (c = 1; c <= space; c++)
//      printf(" ");
//
//    space++;
//
//    for (c = 1 ; c <= 2*(n-k)-1; c++)
//      printf("*");
//
//    printf("\n");
//  }
//
//  return 0;
//}





//
//#include<stdio.h>
//int main()
//{
//	int i,j,k;
//	
//	i=1;
//	while(i<=10)
//	{
//		j=i;
//		while(j<=10)
//		{
//			printf(" ");
//			j++;
//		}
//	    k=1;
//		while(k<=i)
//		{
//			printf("* ");
//			k++;
//		 }
//		 printf("\n");
//		 i++; 
//	
//	}
//	
//	i=1;
//	while(i<=10)
//{
//	j=1;
//	while(j<=i)
//	{
//		printf(" ");
//		j++;
//	}
//	      k=i;
//	  while(k<10)
//	  {
//	  	 printf("* ");
//	  	 k++;
//       }
//	   
//	   printf("\n");
//	   i++;
//	}
//	
//}





















