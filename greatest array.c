#include<stdio.h>
#define SIZE 5
main ()
{
	int a [SIZE],i;
	printf("enter elements");
	for(i=0;i<SIZE;i++)
	scanf("%d" , &a[i]);
	int greatest=a[0];
	for(i=0;i<SIZE;i++)
	{
		if(greatest<a[i])
		greatest=a[i];
	}
		printf("%d " , greatest);
	}
