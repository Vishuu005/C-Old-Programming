#include<stdio.h>
int main()
{
//	int arr[5];
//	
//	arr[0]=12;
//	arr[1]=15;
//	arr[2]=20;
//	arr[3]=25;
//	arr[4]=30;
//////	printf("%d and %d",arr[0],arr[1]);
//////	arr[1]=50;
//////	printf("\n new value: %d",arr[1]);	
//
//
//
//
//int i;
//for(i=0;i<=4;i++)
//{
//	printf(" \n %d  %d",i,arr[i]);
//	}	
//	
//
//int arr[9],i;
//for(i=0;i<=9;i++)
//{printf("enter int value:");
//	scanf("%d",&arr[i]);}
//	for(i=0;i<=9;i++)
//	{printf("\n %d = %d",i,arr[i]);}


//int array[2][2]={{10,20} , {30 , 40} };
//printf("value:%d\n",array[0][0]);
//printf("value:%d\n",array[0][1]);
//printf("value:%d\n",array[1][0]);
//printf("old value:%d\n",array[1][1]);
//array[1][1]=55;
//printf("new value:%d\n",array[1][1]);
//array[1][1]=100;
//printf("recent value:%d\n",array[1][1]);


////int array[2][2][2]={  { {10,20},{30,40} }  ,  { {50,60} , {70,80} }  };
//int aree[2][2][2];
// 
//
//aree[0][0][0]=10;
//aree[0][0][1]=20;
//aree[0][1][0]=30;
//aree[0][1][1]=40;
//aree[1][0][0]=50;
//aree[1][0][1]=60;
//aree[1][1][0]=70;
//aree[1][1][1]=80;
//
//
//printf("%d\n",aree[0][0][0]);
//printf("%d\n",aree[0][0][1]);
//printf("%d\n",aree[0][1][0]);
//printf("%d\n",aree[0][1][1]);
//printf("%d\n",aree[1][0][0]);
//printf("%d\n",aree[1][0][1]);
//printf("%d\n",aree[1][1][0]);
//printf("%d\n",aree[1][1][1]);



int aree[2][4][3],i,j,k;


aree[0][0][0]=10  ;
aree[0][0][1]=20  ;
aree[0][0][2]=30  ;

aree[0][1][0]=40  ;
aree[0][1][1]=50  ;
aree[0][1][2]=60  ;

aree[0][2][0]=70  ;
aree[0][2][1]=80  ;
aree[0][2][2]=90  ;

aree[0][3][0]=100  ;
aree[0][3][1]=110  ;
aree[0][3][2]=120  ;

aree[1][0][0]=130  ;
aree[1][0][1]=140  ;
aree[1][0][2]=150  ;

for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		for(k=0;k<3;k++)
		{printf("%d",aree[i] [j] [k]);}
		printf("\n");
	}
	printf("\n");
}
	return 0;
}
