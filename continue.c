#include<stdio.h>
main()
{
	int i ;
	for( i = 0 ; i < 10 ; i++)
	{
		if( i == 5){
		printf(" don't exicute\n");
		continue;
	}
			printf("%d\n" , i );
	}

}
