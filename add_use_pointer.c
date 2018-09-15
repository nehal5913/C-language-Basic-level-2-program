#include<stdio.h>
#define MAX 30

void main()
{
    int first,second,*p,*q,sum;
    
    printf("Enter two integers to add\n");
    scanf("%d%d",&first,&second);
    
    p=&first;
    /*storing address of first in p*/
    q=&second;
    /*storing address of second in q*/
    sum=*p+*q;
    
    /*adding contents of address stored in p & q*/
    printf("Sum of entered numbers=%d\n",sum);
    return 0;
}