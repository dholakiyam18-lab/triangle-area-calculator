#include<stdio.h>

int main()
{
	int car1,car2;
	int sum,difference,product,quotient,remainder;
	printf("enter first numbar:");
	scanf("%d",&car1);
	
	printf("enter second numbar:");
	scanf("%d",&car2);
	
	sum=car1+car2;
	difference=car1-car2;
	product=car1*car2;
	quotient=car1/car2;
	remainder=car1%car2;
	
	printf("\naddition=%d",sum);
	printf("\nmultiplication=%d",product);
	printf("\ndivision=%d",quotient);
	printf("\nmodulus=%d",remainder);
	
	return 0;
	
	
	
	
}