 #include<stdio.h>
 main()
 {
 	int n,i=0,sum=0,a;
 	printf(" enter number of integers");
 	scanf("%d",&n);
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
	 float avg=(float) sum/n;
	 printf("%f",avg);
 }
 
