#include<stdio.h>
int even_odd ()
{
	int n;
	printf("enter n number");
	scanf("%d" , &n);
	if(n%2==0)
	printf("%d is even \n",n);
	else
	printf("%d is odd \n",n);
}
main()
{
	even_odd ();
}
