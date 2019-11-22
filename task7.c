#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("\nEnter a String:");
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	printf("\nYes, Given string is a pallindrome.");
	else
	printf("\nNo, Given string is not pllindrome.");
	return 0;
}
