#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in celsius:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\nThe temperature in fahrenheit:%f",f);
	return 0;
}

