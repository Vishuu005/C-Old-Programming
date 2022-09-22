//#include<stdio.h>
//#include<string.h>
//
//struct employee
//{
//	int id;
//	char name[50];
//	float salary;
//}
//e1,e2;
//int main()
//{
//	e1.id=101;
//	strcpy(e1.name,"abhinav");
//	e1.salary=100000;
//	e2.id=102;
//	strcpy(e2.name,"abc");
//	e2.salary=200000;
//	printf("employee 1 id: %d \n",e1.id);
//	printf("employee 1 name: %s \n",e1.name);
//	printf("employee 1 salary: %f \n",e1.salary);
//	printf("employee 2 id: %d \n",e2.id);
//	printf("employee 2 name: %s \n",e2.name);
//	printf("employee 2 salary: %f \n",e2.salary);
//	return 0;
//	
//}


//#include<stdio.h>
//#include<string.h>
//struct employee
//{
//	char id[30];
//	char name[30];
//	float salary;
//}
//main()
//{
//struct employee a[2];
//int i,j;
//for (i=0;i<2;i++)
//{
//	printf("enter id:");
//	gets(a[i].id);
//	printf("enter name:");
//	gets(a[i].name);
//	printf("enter salary:");
//	gets(a[i].salary);
//}
//   printf("\n displaying info....\n");
//   for(j=0;j<2;j++)
//   {
//   	printf("id:");
//	puts(a[j].id);
//	printf("name:");
//	puts(a[j].name);
//	printf("salary:");
//	puts(a[j].salary);
//   }
//}



#include<stdio.h>
#include<string.h>
struct employee
{
     int id;
	 char name[30];
	 float salary;
	 char residentarea[100];
	 char job[100];
	 int bonuspoint;         //can we give space between bonus and points??
	 char keyskills[100];
	 char maritalstatus[100];	
}
void main()
{
	struct employee a[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("enter id:");
		scanf("%d",&a[i].id);
		printf("enter name:");
		scanf("%s",&a[i].name);
		printf("enter salary:");
		scanf("%f",&a[i].salary);
		printf("enter residence area:");
		scanf("%s",&a[i].residentarea);
		printf("enter job location:");
		scanf("%s",&a[i].job);
		printf("enter key skills:");
		scanf("%s",&a[i].keyskills);
		printf("enter bonus points:");
		scanf("%d",&a[i].bonuspoint);
		printf("are you married:");
		scanf("%s",&a[i].maritalstatus);
		printf("\n**********\n");
	}
	for(j=0;j<5;j++)
	{
		printf("id: %d\n",a[j].id);
		printf("name: %s\n",a[j].name);
		printf("salary: %f\n",a[j].salary);
		printf("residence area: %s\n",a[j].residentarea);
		printf("job location: %s\n",a[j].job);
		printf("key skills: %s\n",a[j].keyskills);
		printf("bonus points: %d\n",a[j].bonuspoint);
		printf("marital status: %s\n",a[j].maritalstatus);
		printf("\n***********\n");
	}
}
