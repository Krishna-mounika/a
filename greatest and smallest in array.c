#include<stdio.h>
#define SIZE 5
main ()
{
	int a [SIZE],i;
	prntf("enter elements");
	for(i=0;i<SIZE;i++)
	scanf("%d" , &a[i]);
	int greatest=a[0],smallest=a[0];
	for(i=0;i<SIZE;i++)
	{
		if(greatest<a[i])
		greatest=a[i];
	}
	for(i=0;i<SIZE;i++)
	{
        if(smallest>a[i])
		smallest=a[i];
	}
	printf("%d is greatest \n" , greatest);
	printf("%d is smallest \n" , smallest);
}

