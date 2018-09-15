#include<stdio.h>
#include<conio.h>

int main()
{
    int status;
    char file_name[25];
    printf("Enter the name of file you wish to delete\n");
    gets(file_name);
    status=remove (file_name);
    //remove() will delete specific file and return 0 if file delete 
    if (status == 0)
    printf("%s file delete successfully\n",file_name);
    else
    {
        printf("Unable to delete the file\n");
        perror("Error");
    }
    return 0;
}




























