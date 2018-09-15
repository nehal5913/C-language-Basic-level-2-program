#include<stdio.h>
#include<conio.h>
#include<dir.h>

int main()
{
    FILE *fs1,*fs2,*ft;
    char ch,file1[20],file2[20],file3[20];
    
    printf("Enter name of first file \n");
    gets(file1);
    
    printf("Enter name of seconf file \n");
    gets(file2);
    
    printf("Enter name of file which will store contents of two files \n");
    gets(file3);
    
    fs1=fopen(file1,"r");
    fs2=fopen(file2,"r");
    //if file is not found then exit
    if (fs1==NULL||fs2==NULL)
    {
        perror("Error");
        printf("Press any key to exit ....\n");
        getch();
        exit(EXIT_FAILURE);
    }
    
    ft=fopen(file3,"w");
    //open file in write mode
    //if file is not found then exit 
    if(ft==NULL)
    {
        perror("Error");
        printf("Press any key to exit ....\n");
        exit(EXIT_FAILURE);
    }
    while((ch=fget(fs1))!=EOF)
    fputc(ch,ft);
         //appending contents of file1 to resultant file
    
    while((ch=fget(fs2))!=EOF)
    fputc(ch,ft);
         //appending contents of file2 to resultant file
    
    printf("Two files were merged into %s file successfully.\n",file3);
    //close all file pointers
    fclose(fs1);
    fclose(fs2);
    fclose(ft);
    return 0;
}




























