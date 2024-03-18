//This code is prepared 23CS014_Div 1
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float s1,s2,s3;
    printf("Enter the value of points (x1,y1)= ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of points (x2,y2)= ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the value of points (x3,y3)= ");
    scanf("%d %d",&x3,&y3);
    s1=fabs((y2-y1)/(x2-x1));
    s2=fabs((y3-y2)/(x3-x2));
    s3=fabs((y3-y1)/(x3-x1));
    if(s1==s2 && s2==s3)
    {
        printf("The given points are Collinear points");

    }
    else
    {
        printf("The given points are Non-collinear points");
    }
    printf("\n\n23CS014_Priyanshu");
    return 0;
}
