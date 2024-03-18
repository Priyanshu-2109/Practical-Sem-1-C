// This code is prepared by 23CS014_Div 1
#include<stdio.h>
#include<math.h>
int main()
{
    int q,p,t;

    printf("Please enter the quantity of your total purchase :");
    scanf("%d",&q);
    printf("Please enter the price per item : ");
    scanf("%d",&p);
    t=(p*q);
    if(q>=1000)
    {
        t=t-(0.1*t);
    }
    printf("Your purchase amount after discount is %d\n",t);
    printf("\n23CS014_Priyanshu");
    return 0;
}
