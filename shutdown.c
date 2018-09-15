#include <stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Do U want to shutdown your computer now (y/n)\n");
    scanf("%c",&ch);
    
    if(ch=='y'|| ch=='Y')
    system("C:\\WINDOWS\\System32\\shutdown/s");
	/*shutdown command*/

    return 0;
}