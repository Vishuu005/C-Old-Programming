//#include<stdio.h>
//int main()
//{
//	int number=100;
//	int *p;
//	p=&number;
//	printf("address of p variable is: %x \n",p);
//	printf("value of p variable:%d \n",p);
//	printf("value of p variable:%d \n",&p);
//	printf("value of p variable:%d \n",*p);
//	printf("value of p variable:%d \n",&number);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
////	int x=10,y=20,t;
////	printf("value of x:%d\n",x);
////	printf("value of y:%d\n",y);
////	
////	t=x;
////	x=y;                // value swap of x and y
////	y=t;
////
////	printf("value of x:%d\n",x);
////	printf("value of y:%d\n",y);
//                                 ////OR
//								 
//int x=11,y=22,temp,*p1,*p2;
//p1=&x;
//p2=&y;
//temp=*p1;        //value swap of x and y using pointer
//*p1=*p2;
//*p2=temp;
//printf("value of x is %d while value of y is %d",x,y);								  
//}


//#include<stdio.h>
//int main()
//{
//	int *p=NULL;   //what was null value???????
//	printf("the value of p is : %x",p);
//}

//#include<stdio.h>
//int main()
//{
//	int number=50;
//	int *p=&number;   //what is %u??????????  //uninary operator
//	printf("value of number is %d \t address of number is %u \n %x \n %d \n ",number,&number,&number,&number);
//}

//#include<stdio.h>
//int main()
//{
//	int a=10,b=20,*p1=&a,*p2=&b;
//	printf("before swap *p1:%d and \t *p2:%d",*p1,*p2);
//    *p1=*p1+*p2;//30
//    *p2=*p1-*p2;//10
//    *p1=*p1-*p2;//20
//    printf("\n after swap *p1=%d \t and *p2=%d",*p1,*p2);
//}

//#include<stdio.h>
//int main()
//{
//	int a=10;
//	int *p;                       // data hiding(pointer)from user
//	int **pp;                     //hexa decimal is machine language
//	p=&a;
//	pp=&p;                               //DOUBLE POINTER
//	printf("address of a: %x \n",p);
// 	printf("address of p: %x \n",pp);
//    printf("value stored at p: %d \n",*p);
//	printf("value stored at pp: %d \n",**pp); 
//}

//#include<stdio.h>
//void main()
//{
//	int a=10;
//	int*p;
//	int**pp;
//	p=&a;// *p is pointing to the address of a 
//	pp=&p;// **pp is a doublr pointer pointing to the address of p
//	printf("address of a:%x \n",p);
//	printf("address of p:%x \n",pp);
//	printf("value stored at a:%d \n",*p);
//	printf("value stored at p:%d \n",**pp);
//}

//#include<stdio.h>
//int main()
//{
//	
//	int number=50;
//	int *p;
//	int **p2;
//	p=&number;
//	p2=&p;
//	printf("address of number variable: %x \n",&number);
//	printf("address of p variable:%x \n",p);
//	printf("address of p2 variable:%x \n",p2);
//	printf("value of number variable:%d \n",number);
//	printf("value of p variable:%d \n",*p);
//	printf("value of p2 variable:%d \n",**p2);
//}
