#include<stdio.h>
main()
{
int n,i=0,a[50],j;
 printf("enter n");
 scanf("%d" ,&n);
 while(n!=0)
 {
 	a[i]=n%2;
 	n/=2;
 	i++;
 }
 for(j=i-1;j>=0;j--)
 printf("%d",a[j]);
}
