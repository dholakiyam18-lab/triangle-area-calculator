#include <stdio.h>
int main()
{
	float base,hight,area;
	
	printf("enter base ofv triangle:");
	scanf("%f",&base);
	
	printf("enter height of triangle:");
	scanf("%f",&hight);
	
	area=(base*hight)/2;
	 
	printf("area of triangle=%.2F",area);
	
	return 0;
}