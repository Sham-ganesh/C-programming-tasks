#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter a number till you want the pyramid:");
	scanf("%d",&n);
	printf("\nPyaramid:\n");
	for(i=n;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
	return 0;
}
