#include<stdio.h>
int main()
{
	float principal,rate,time,simplelnterest;
	
	printf("enter principal amount:");
	scanf("%f",&principal);
	
	printf("enter rate of interest:");
	sacnf("%f",&rate);
	
	printf("enter time (years):");
	sacnf("%f",&time);
	
	simplelnterest=(principal* rate *time)/100;
	
	printf("simple interest=%.2f",simplelnterest);
	
	return 0;
	
	
}