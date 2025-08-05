#include<stdio.h>
void strdescending(char st[])
{
	int i,j,l=0,temp;
	for(i=0;st[i]!='\0';i++)
		l++;
	for(i=0;i<l-1;i++)
	{
	for(j=i+1;j<l;j++)
	{
		if(st[i]<st[j])
		{
			temp=st[i];
			st[i]=st[j];
			st[j]=temp;			
		}
	}
}
}
int main ()
{
char st[20];
	printf("enter string:");
	scanf("%s",st);
	strdescending(st);
	printf("%s",st);
}
