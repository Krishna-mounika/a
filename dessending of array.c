#include<stdio.h>
#define SIZE 5
main()
{
	int a[SIZE], i, j, temp ;
	printf("enter elements");
	for(i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
	for(i=0;i<SIZE-1;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<SIZE;i++)
	printf("%d " ,a[i]);
}
