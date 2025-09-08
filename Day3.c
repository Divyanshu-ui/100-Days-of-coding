#include<stdio.h>
int main()
{
	int c;
	printf("enter the temperature in celsius : ");
	scanf("%d" ,&c);
	printf("the temperature fahrenheit is : %d ",(c*9/5)+32);
	return 0;
}