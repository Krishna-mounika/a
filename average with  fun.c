//print averag number fo integers with arguments
#include<stdio.h>
float average(int);
main()
{
	int n;
	printf("enter number of integer");
	scanf("%d", &n);
	printf("%f",average(n));
}
float average(int n)
{
	int i=0, sum=0 , a;
	float average;
	while (i<n)
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
		average=(float)sum/n;
	}
	return average;
}
