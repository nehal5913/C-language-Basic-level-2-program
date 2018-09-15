#include<stdio.h>
int main()
{
    int n,remain,originalValue,reverseInteger;
    scanf("%d",&n);
    originalValue=n;
    while(n!=0)
    {
        remain=n%10;
        reverseInteger=reverseInteger*10+remain;
        n=n/10;
    }
    
    if(originalValue==reverseInteger)
    {
        printf("Palindrome");
    }
    else
    {
        printf("not Palindrome");
    }
    return 0;
}