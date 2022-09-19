#include<stdio.h>
#include<stdlib.h>
int main(){
	char name[20];
	printf("1enter your name:");
	fgets(name ,sizeof(name), stdin);
	printf("name:");
	puts(name);
	return 0;
}
