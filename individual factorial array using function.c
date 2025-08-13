#include<stdio.h>
int SIZE;
void factorial(int);
int main()
{
	int a[50],i,n;
	printf("enter integer");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
		printf("enter integer");
		scanf("%d",&a[i]);
		factorial(a[i]);
	}
	
}
void factorial(int n)
{
	int f=1,i;
	if(n==0)
	{
		printf("%d",i);
	}
	else
	{
		for(i=1;i<=n;i++)
		f*=i;
		printf("%d \n",f);
	}
}
