#include<stdio.h>
main()
{
	int a[5]={1,3,5,-6,10},i;
	for(i=0;i<5;i++)
	{
		printf("%d %u\n",a[i],&a[i]);
	}
}
