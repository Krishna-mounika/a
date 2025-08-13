#include<stdio.h>
int SIZE ;
void greatest(int b[]);
int main ()
{
	int a[50],i;
	printf("enter SIZE ");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
		printf("enter integer",i);
		scanf("%d",&a[i]);
	}
		greatest(a);
}
void greatest(int b[])
{
	int i;
	int greatest=b[0];
	for(i=0;i<SIZE;i++)
	{
		if(greatest<b[i])
		greatest=b[i];
	}
	printf("%d is greatest",greatest);
}
