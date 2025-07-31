#define R 3
#define C 2
#include<stdio.h>
main()
{
	int a[R][C],b[R][C],c[R][C],i,j;
	printf("enter elements of matrix a and matrix b\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("Enter a[%d][%d] and b[%d][%d] \n",i,j,i,j);
			scanf("%d %d",&a[i][j],&b[i][j]);
		}
	}
	printf("The addition of matrix is \n");
	for (i=0;i<R;i++)
	{
		for (j=0;j<C;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t ",c[i][j]);
		}
		printf("\n ");
	}
}
