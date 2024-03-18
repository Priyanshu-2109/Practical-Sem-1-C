// This code is prepared by 23CS014_Priyanshu Div_1
#include<stdio.h>

void DtoB(int n)
{
    if(n>1)
    {
        DtoB(n/2);
    }
    printf("%d",n%2);
}

int main()
{
    int n;
    printf("Enter a positive integer : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please enter a valid positive integer\n");
        return 1;
    }
    printf("The binary equivalent of %d is :",n);
    DtoB(n);
    printf("\n23CS014_Priyanshu");
    return 0;
}
