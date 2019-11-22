#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	float c,f;
	printf("\nMenu\n1.Celsius to fahrenheit.\n2.Faherenheit to celsius.\n3.Exit.");
	printf("\nEnter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("Enter temperature in celsius:");
			   scanf("%f",&c);
			   f=(c*9/5)+32;
			   printf("\nThe temperature in fahrenheit:%f",f);
			   break;
		case 2:printf("\nEnter temperature in fahrenheit:");
			   scanf("%f",&f);
			   c=(f-32)*5/9;
			   printf("\nThe temperature in celsius:%f",c);
			   break;
		case 3:exit(0);
			   break;
		default:printf("\nInvalid choice.");
	}
    return 0;
}

