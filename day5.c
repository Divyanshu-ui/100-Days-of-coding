#include<stdio.h>
#include<math.h>
int main()
{
	int p ,t ,r ,CI ,SI ,a,n;
	printf("enter the principal");
	scanf("%d" ,&p);
	
	printf("enter the time");
	scanf("%d" ,&t);
	
	printf("enter the rate");
	scanf("%d" ,&r);
	
	printf("enter number of years");
	scanf("%d" ,&n);
	
	SI=p*r*t/100;
	printf("simple interest is %d",SI);
	
	a=p*pow((1+r/n),(n*p));
	
	CI=a-p;
	printf("compound interest is %d",CI);
	
	
}