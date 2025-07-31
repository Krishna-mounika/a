#include<stdio.h>
#define R 3
#define C 2

int main()
{
	float a[R][C] , b[R][C], c[R][C];
	int i,j;
	printf("Enter elements of matrix :\n");
	for (i=0;i<R;i++)
	{
		for (j=0 ; j<C ; j++)
		{
			printf("Enter a[%d][%d] and b[%d][%d] :\n" ,i,j,i,j);
			scanf("%f%f",&a[i][j],&b[i][j]);
		}
	}
	printf("The addition of matrix is :\n");
	for(i=0 ; i<R ; i++)
	{
		for(j=0 ; j<C ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%f ",c[i][j]);
		}
		printf("\n");
	}
}

