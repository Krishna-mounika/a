#include<stdio.h>
int SIZE ;
void even_odd(int);
int main ()
{
	int a[50],i,n;
	printf("enter SIZE ");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
		printf("enter integer");
		scanf("%d",&a[i]);
		even_odd(a[i]);
	}
}
void even_odd(int n)
{
	if(n%2==0)
	printf("%d is even \n" ,n);
	else
	printf("%d is odd \n" ,n);
}

