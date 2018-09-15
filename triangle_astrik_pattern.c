
#include <stdio.h>

int main()
{
    int i,j,n,n1;
    scanf("%d",&n);
    n1=n;
    
    
    for(i=0;i<n;i++)           //for row
    {
        for(j=0;j<n1;j++)      //for column
        {
        printf(" ");
        }
        n1--;
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
