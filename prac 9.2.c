//This code is prepared by 23CS014 Chaniyara Priyanshu
#include<stdio.h>
#include<conio.h>
#include<math.h>
void area(float a,float b,float c)
{
    float k,area_triangle;
    k = (a + b + c) / 2;
    area_triangle = sqrt(k * (k - a) * (k - b) * (k - c));
    printf("Area of triangle : %f",area_triangle);
}
int check()
{
    float a,b,c;
    printf("Enter length 1 :- ");
    scanf("%f",&a);
    printf("Enter length 2 :- ");
    scanf("%f",&b);
    printf("Enter length 3 :- ");
    scanf("%f",&c);

    if(a+b>=c && b+c>=a && c+a>=b && a>0 && b>0 && c>0)
    {
        printf("Triangle is formed\n");
        area(a,b,c);
    }
    else
    {
        printf("Triangle is not formed");
    }
    printf("\n 23CS014 Chaniyara Priyanshu");
}
void main()
{
    check();
}

