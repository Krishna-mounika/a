#include<stdio.h>
//Arithamatic caliculation unsing function - with return type and with arguments
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int a,b,S,S1,M,D;
	printf("enter 2 numbers\n");
	scanf("%d %d",&a,&b);
	S=sum(a,b);
	S1=sub(a,b);
	M=mul(a,b);
	D=div(a,b);
	printf("%d\n%d\n%d\n%d\n",S,S1,M,D);
}
	int sum (int a , int b)
{
	int sum;
	sum = a+b;
	return sum;
}
    int sub(int a , int b)
{
    int sub;
    sub=a-b;
    return sub;
}
	int mul (int a , int b)
{
	int mul;
	mul=a*b;
	return  mul;
}
    int div(int a, int b)
{
	int div;
	div=a/b;
	return div ;
}
	
    
