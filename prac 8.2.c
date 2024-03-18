//23CS014 Chaniyara Priyanshu
#include<stdio.h>
#include<string.h>
int main()
{
    char names[5][50];
    printf("Enter the name of 5 students :\n");
    for(int i=0; i<5; i++)
    {
        printf("Student %d: ",i+1);
        scanf("%s",names[i]);
    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
                char temp[50];
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("\nSorted name in alphabetical order:\n");
    for(int i=0; i<5; i++)
    {
        printf("Student %d: %s\n ",i+1,names[i]);
    }

    return 0;
}
