#include<stdio.h>
int SIZE ;
void descending(int b[]);
int main ()
{
	int a[50],i,n;
	printf("enter SIZE ");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
		printf("enter integer",i);
		scanf("%d",&a[i]);
	}
		descending(a);
}
void descending(int b[])
{
	int i,j,temp;
	for(i=0;i<SIZE-1;i++)
	{
		for(j=i+1;j<SIZE;j++)
		if (b[j]>b[i])
		{
			temp=b[j];
			b[j]=b[i];
			b[i]=temp;
		}
		
	}
	for(i=0;i<SIZE;i++)
	printf("%d" ,b[i]);
}
