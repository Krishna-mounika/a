#include<stdio.h>
int main()
{
	int x,y=10,z=20;
	int *ptr=&z;
	printf("%u %u\n",&y,&z);
	printf("%u\n",ptr);
	x=(*ptr)++;
	printf("%d %u %d\n",x,ptr,*ptr);
}
