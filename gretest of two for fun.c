#include<stdio.h>
int greatest(int a,int b)
{
	return(a>b?a:b);
}
main()
{
	int a=4 , b=8;
	printf("%d" , greatest(a,b));
}
