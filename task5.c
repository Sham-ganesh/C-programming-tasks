#include<stdio.h>
int main()
{
	int n,rev=0,d;
	printf("\n Enter a number to be reversed :");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	printf("\nReversed Number:%d",rev);
	return 0;
}
