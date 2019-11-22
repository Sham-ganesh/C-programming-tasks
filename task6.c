#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,temp1,temp2,arm=0,i;
	printf("\n Enter a number :");
	scanf("%d",&n);
	temp1=n;
	temp2=n;
	while(temp1!=0)
	{
		temp1/=10;
		i++;
	}
	while(n!=0)
	{
		d=n%10;
		arm+=pow(d,i);
		n/=10;
	}
	if(arm==temp2)
	printf("\nYes,Given number is a Armstrong number.");
	else
	printf("\nNo,given number is not armstrong.");
	return 0;
}
