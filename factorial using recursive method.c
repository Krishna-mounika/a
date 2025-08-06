#include<stdio.h>
int fact(int);
main()
{
	printf("%d \n" , fact(5));
	printf("%d \n" , fact(7));
	printf("%d \n" , fact(10));
	printf("%d \n" , fact(15));
	printf("%d \n" , fact(16));
}
int fact(n)
{
	int r;
	if(n==0)
	r=1;
	else
	r=n*fact(n-1);
	return r;
}
