//print averag number of integers without arguments
#include<stdio.h>
float average()
{
	int i=0, sum=0,a,n;
	printf("enter number of integer");
	scanf("%d",&n);
	float average;
	while(i<n)
	{
	 	printf("enter positive integer");
		scanf("%d",&a);
		if (a<0)
		{
				printf("you enter negative number");
			continue;
		}
		sum+=a;
		i++;
		}
		average=(float)sum/n;
		return average;
	}
	main()
	{
		printf("%f",average());
	}

