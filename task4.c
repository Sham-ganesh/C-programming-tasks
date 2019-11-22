#include<stdio.h>
#include<string.h>
int main()
{
	char fname[20],lname[20],str[40];
	printf("\nEnter your first name:");
	scanf("%s",fname);
	printf("\n Enter tour last name:");
	scanf("%s",lname);
	strcpy(str,fname);
	strcat(str,lname);
	printf("\nYour name is:%s",str);
	return 0;	
}
