#include<stdio.h>
main()
{
	auto int x=100;
	{
		auto int x=200;
		printf("%d\n",x);
	}
	printf("%d\n",x);
}
