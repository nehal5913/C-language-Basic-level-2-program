#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("\nEnter the value of num1 and num2:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a and b :%d %d",a,b);
}