//pasiing individual array
//print prime or not
int SIZE ;
void prime(int);
main()
{
	int a[50],i ;
	printf("Enter SIZE");
	scanf("%d", &SIZE);
	for(i=0 ; i<SIZE ; i++)
	{
		printf("Enter integer");
		scanf("%d",&a[i]);
		prime(a[i]);
	}
}
void prime(int n)
{
	int i,count=0;
	for(i=1 ; i<=n ; i++)
	{
		if(n%i ==0)
		count++;
	}
	if(count==2)
	printf("%d is prime" , n);
	else
	printf("%d is not prime \n" , n);
}

