#include<stdio.h>

void main()
{
    int numArray[10];
    int i,sum=0;
    int *ptr;
    
    printf("\nEnter 5 element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&numArray[i]);
    }
    ptr=numArray; /*a=&a[0]*/
    
    for(i=0;i<5;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    
    printf("The sum of array elements:%d",sum);
}