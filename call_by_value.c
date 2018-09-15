#include<stdio.h>
#include<conio.h>

void call_by_value(int x)
{
    printf("inside call by value x= %d before adding 10.\n",x);
    x+=10;
    printf("inside call by value x= %d after adding 10.\n",x);
}

int main()
{
    int a=10;
    printf("a=%d before function call by value.\n",a);
    call_by_value(a);
    
     printf("a=%d after function call by value.\n",a);
    //call_by_reference(&b);
}




























