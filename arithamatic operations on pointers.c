#include<stdio.h>
main()
{
	int x=5,y=4,z=3;
	int* ptr1=&x;
	int* ptr2=&y;
	printf("%d %u\n",*ptr1,ptr1);
	printf("%d %u\n",*ptr2,ptr2);
	ptr2=ptr2+1;
	printf("%d %u\n",*ptr2,ptr2);
	ptr1=ptr1-1;
	printf("%d %u\n",*ptr1,ptr1);
	
	printf("%d\n",ptr2-ptr1);
}
