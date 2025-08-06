#include<stdio.h>
main()
{
	int i=1, n, f=1;
	print(" enter n ");
	scanf("%d" , &n );
	if ( n == 0 )
	{
	printf (" %d", f );
}
	while (i <= n)
	{
		f*=i;
		i++;
		}
	
	printf("%d", f);
}
