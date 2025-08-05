#include<stdio.h>
#include <stdlib.h>
main()
{
	int x=5;
	int *const ptr=&x;
	int y=20;
	printf("%d %u\n",*ptr,ptr);
	//ptr=&y;
	*ptr=100;
	printf("%d %u\n",*ptr,ptr);
}
