#include<stdio.h>
int main()
{
	int x,y=5,z=10;
	int *ptr=&z;
	printf("%u %u\n",&y,&z);
	printf("%u\n",ptr);
	x=++*ptr;
	printf("%d %u %d\n",x,ptr,*ptr);
}
