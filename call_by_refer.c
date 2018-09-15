#include<stdio.h>
#include<conio.h>

void call_by_reference(int *y)
{
    printf("inside call by reference y= %d before adding 10.\n",*y);
    (*y)+=10;
    printf("inside call by reference y= %d after adding 10.\n",*y);
}

int main()
{
    int b=10;
    printf("b=%d before function call by reference.\n",b);
    call_by_reference(&b);
    
     printf("b=%d after function call by reference.\n",b);
    //call_by_reference(&b);
}




























