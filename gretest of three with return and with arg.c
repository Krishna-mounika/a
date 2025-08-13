#include<stdio.h>
int greatest( int a, int b, int c)
{
	return (a>b?(a>c?a:c):b>c?b:c);
}
main()
{
	int a=5 , b=4 , c=3 ;
	printf("%d", greatest(a,b,c));
}
