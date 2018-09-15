#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    struct student{
        char name [30],sex[1];
        int rollno;
        float percentage;
    }    ;
    union details{
        struct student st;
    };
    union details set;
    printf("Enter details:");
    printf("\nEnter name:");
    scanf("%s",set.st.name);
    printf("Enter rollno:");
    scanf("%d",&set.st.rollno);
    printf("Enter sex");
    scanf("%s",&set.st.sex);
    printf("Enter percentage:");
    scanf("%f",&set.st.percentage);
    
    printf("\nThe student detail are:\n");
    printf("\nName:%s",set.st.name);
    printf("\nRollno:%d",set.st.rollno);
    printf("\nSex:%s",set.st.sex);
    printf("\nPercentage:%f",set.st.percentage);
    return 0;
    
}














