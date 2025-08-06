#include<stdio.h>
#include <stdlib.h>
main()
{
	int x=5, y=20,sum(int,int),(*ptr)(int,int);
	float z=3.45,sub(int,float),(*ptr1)(int,float);
	void mul(int,int),(*ptr2)(int,int);
	ptr=&sum;
	printf("%d\n",ptr(x,y));
     ptr1 = &sub;
    printf("%f\n", ptr1(x, z));
	ptr2 = &mul;
    ptr2(x, y);
	}
	int sum(int a,int b)
	{
		return a+b;
	}
	float sub(int a, float b)
{
    return a - b;
}
	void mul (int a, int b)
	{
		printf("\n %d",a*b);
	}

