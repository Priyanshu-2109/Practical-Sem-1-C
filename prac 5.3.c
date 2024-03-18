//This code is prepared by 23CS014_Div 1
#include<stdio.h>
#include<math.h>
int main()
{
    int y;
    printf("Enter the year you want to check weather it is leap year or not : ");
    scanf("%d",&y);


    if ((y%4==0 && y%100!=0) || (y%400==0))
    {
        printf("Entered year %d is a leap year",y);

    }

    else
    {
        printf("Entered year %d is not a leap year",y);
    }
    printf("\n23CS014_Priyanshu");
    return 0;
}

