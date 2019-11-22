#include<stdio.h>
int main()
{
	float m1,m2,m3,sum=0,avg;
	printf("\nEnter your mark in Subject 1:");
	scanf("%f",&m1);
	printf("\nEnter your mark in Subject 2:");
	scanf("%f",&m2);
	printf("\nEnter your mark in Subject 3:");
	scanf("%f",&m3);
	sum=m1+m2+m3;
	avg=sum/3;
	printf("\nSum=%f\nAverage=%f",sum,avg);
	return 0;
}
