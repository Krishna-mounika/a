#include<stdio.h>
#include <stdlib.h>
main()
{
	int *ptr=NULL,i,j,n,temp;
	printf("enter number n \n");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Mem not allocated\n");
	}
	else
	{
		printf("Mem allocated successfully\n");
		printf("enter integers\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		printf("Ascending order of given numbers\n");
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(*(ptr+i)<*(ptr+j))
				{
					temp=*(ptr+i);
					*(ptr+i)=*(ptr+j);
					*(ptr+j)=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		printf("%d\t",*(ptr+i));
	}
	free(ptr);
}
