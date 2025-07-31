#include<stdio.h>
//Arithamatic caliculation unsing function - with return type and without arguments
int sum();
int sub();
int mul();
int div();
main()
{
	int S,S1,M,D;

	S=sum();
	S1=sub();
	M=mul();
	D=div();
	printf("%d\n%d\n%d\n%d\n",S,S1,M,D);
}
	int sum ()
{

	int sum , a, b;
	printf("enter a,b\n");
	scanf("%d %d ",&a, &b);
	sum = a+b;
	return sum;
}
    int sub()
{
	int sub, a, b;
	printf("enter a,b\n");
	scanf("%d %d ",&a, &b);
    sub=a-b;
    return sub;
}
	int mul ()
{
	int mul , a, b;
	printf("enter a,b\n");
	scanf("%d %d ",&a, &b);
	mul=a*b;
	return  mul;
}
    int div()
{
	int div , a, b;
	printf("enter a,b\n");
	scanf("%d %d ",&a, &b);
	div=a/b;
	return div ;
}
	
    
