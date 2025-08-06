int factorial( int );
main()
{
	int a;
	printf("enter a");
	scanf("%d", &a);
	printf("%d", factorial(a));
}
 int factorial(int n)
 {
 	int f=1 , i;
 	for(i=1 ;i<=n;i++)
 		f=f*i;
 	return f;
 }
