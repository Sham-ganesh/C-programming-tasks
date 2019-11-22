#include<stdio.h>
int main()
{
	int n,i,p=1;
	printf("\nEnter a number:");
	scanf("%d",&n);
	printf("\nTables of the given number:");
	for(i=1;i<=10;i++)
	{
		p=n*i;
		printf("\n%d * %d = %d ",n,i,p);
	}
	return 0;
}
