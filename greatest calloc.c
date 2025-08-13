#include <stdio.h>
#include <stdlib.h>  
int main() 
{
    int  *ptr=NULL,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,4);
    if (ptr==NULL) 
        printf("Memory not allocated");
    else
    {
    printf("memory allocated sucessfully\n");
    printf("Enter integers:");
    for (i=0;i<n;i++) 
    scanf("%d",ptr+i);
    int greatest=ptr[0];
    for (i=0;i<n;i++) 
	{
            if (greatest<ptr[i]) 
            greatest=ptr[i];
    }
    printf("greatest value is:%d",greatest);
    free(ptr);
    }
}
