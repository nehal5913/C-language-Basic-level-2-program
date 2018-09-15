#include<stdio.h>
#include<conio.h>

int main()
{
    int n, c;
    //rand() is used to get random numbers
    printf("Ten random numbers in 1 to 100\n");
    for (c=1;c<=10;c++)
    {
        n=rand()%100+1;
        //rand()%100 gives random value in between 0 to 99
        printf("%d\n",n);
    }
    return 0;
}




























