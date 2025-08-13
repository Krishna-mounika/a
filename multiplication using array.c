#include<stdio.h>
 int main ()
{
	int a[50][50],b[50][50],c[50][50],R1,R2,C1,C2,i,j,k;
	printf("enter R1,C1:\n");
	scanf("%d%d",&R1,&C1);
	printf("Enter elements of matrix A:\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter R2,C2:\n");
	scanf("%d%d",&R2,&C2);
	printf("Enter elements of matrix b:\n");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(C1!=R2) 
	{
        printf("Matrix multiplication is not possible.\n");
    return 0;
    }
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C2;j++)
			{
				c[i][j]=0;
				for(k=0;k<C1;k++)
				{
				c[i][j]+=a[i][k]*b[k][j];
				}
			printf("%d ",c[i][j]);
		}  
       printf("\n");
}
}
