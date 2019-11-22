#include<stdio.h>
#include<string.h>
int main()
{
	int age;
	char name[20],phn[20];
	printf("\nEnter your name:");
	gets(name);
	printf("\nEnter your phone number: ");
	scanf("%s",phn);
	printf("\nEnter your age:");
	scanf("%d",&age);
	printf("\nName:%s",name);
	printf("\nPhone number:%s",phn);
	printf("\nAge:%d",age);
	return 0; 
}
