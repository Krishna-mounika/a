#include<stdio.h>
main()
{
	int i, n, f = 1;
	printf(" enter number ");
	scanf("%d", &n);
	if( n==0)
	printf("%d", 1);
	else
	{
		for(i = 1 ; i <= n ; i++)
		f*= i;
		printf("%d", f);
		
	}
	return 0;
}
