#include<stdio.h>
main()
{
	int *p1;
	float *p2;
	char *p3;
	double *p4;
	printf("%d %d %d %d\n",sizeof(p1) ,sizeof(p2) ,sizeof(p3) ,sizeof(p4));
	printf("%d %d %d %d\n",sizeof(*p1), sizeof(*p2), sizeof(*p3) ,sizeof(*p4));
	
}
