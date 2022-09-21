#include<stdio.h>
void main()
{
	char s[]="apple abhinav jain";
	int i=0;
	int count=0;
	while(i<30)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			count++;
		}
		i++;
	}
        printf("no. of vowels: %d",count);	
}
