#include<stdio.h>
int main()
{
	int x,y=5,z=10;
	int *ptr=&y;
	printf("%u\n",ptr);
	x=*ptr++;
	printf("%d %u %d\n",x,ptr,*ptr);
}
