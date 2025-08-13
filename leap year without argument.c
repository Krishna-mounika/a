//leap year without arguments
#include<stdio.h>
int leapyr();
main()
{
	leapyr();
}
int leapyr()
{
	int year;
	printf("enter year");
	scanf("%d", &year);
	if(year%4==0 && year%100!=0 || year%400==0)
	printf("%d is leap year", year);
	else
	printf("%d is not leap year" , year);
}
