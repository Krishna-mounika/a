#include <stdio.h>
main() 
{
    int n, i = 1 ,j=1, f=1;
    printf("Enter a number: ");
    scanf("%d", &n);
	while(j<n)
    {
	while(i <= n) 
	{
    f = f * i;
     printf("Factorial of %d : %d \n",i, f);
     i++;
	}
    j++;
}
}

