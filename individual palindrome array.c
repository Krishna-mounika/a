#include<stdio.h>
int SIZE;
void palindrome(int);
int main ()
{
	int a[50],i,n;
	printf("enter SIZE ");
	scanf("%d",&SIZE);
	for(i=0;i<SIZE;i++)
	{
		printf("enter integer");
		scanf("%d",&a[i]);
		palindrome(a[i]);
	}
}
void palindrome(int n)
{
	int r,sum = 0 ;
	int temp = n;
	while(n >0)
		{
		r = n%10 ;
		sum = sum * 10 +r ;
		n = n / 10;
	}
	n=temp;
	if(n==sum)
	printf("palindrome");
	else
	printf("not palindrome");
}
