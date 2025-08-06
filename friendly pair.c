#include <stdio.h>
main()
{
int getDivisorsSum(int num)
{
    int i,sum = 0;
    for(i=1;i<num;i++)
	{
        if(num%i==0)
            sum=sum+i;
    }
    return sum;
}
int main ()
{
    int n1, n2;
    printf("enter num1,num2");
    scanf("%d %d",&n1 ,&n2);
    int sum1 = getDivisorsSum(n1);
    int sum2 = getDivisorsSum(n2);
    if(sum1*n1 == sum2*n2)
        printf("(%d,%d) are friendly pairs", n1, n2);
    else
        printf("(%d,%d) are not friendly pairs", n1, n2);
}
}
