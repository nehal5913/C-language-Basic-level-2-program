

#include <stdio.h>
#include<stdlib.h>

int main()
{
    char ch,file_name[25];
    FILE*fp;
    
    printf("Enter the name of file you wish to see\n");
    gets(file_name);
    
    fp=fopen(file_name,"r");//read mode
    
    /*if file not found then exit*/
    if (fp==NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    printf("The contents of %s file are:\n",file_name);
    
    while ((ch=fgetc(fp))!=EOF)
    printf("%c",ch);
    /*printing one by one character from file*/
    fclose(fp);
    return 0;
    
}














