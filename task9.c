#include<stdio.h>
int main()
{
	int n,i;
	long int fact=1;
	printf("\nEnter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact*=i;
	printf("\nFactorial:%ld",fact);
	return 0;
}
