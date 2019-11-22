#include<stdio.h>
int main()
{
	int i,a[100],n,max,min;
	printf("\nEnter no.of elements:");
	scanf("%d",&n);
	printf("\nenter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("\nMaximum element:%d",max);
	printf("\nMinimum element:%d",min);
	return 0;
}
