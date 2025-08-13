#include<stdio.h>
#include<string.h>
main ()
{
	char st[20]="welcome";
	int i,l=0;
	for(i=0;st[i]!='\0';i++)
		l++;
	printf("%d",l);
}
