//This code is prepared by 23CS014_Priyanshu
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main()
{
float l=50;
float g1,g2,g3,g4,t1,t2,t3,t4;
printf("Enter g1 : ");
scanf("%f",&g1);
printf("Enter g2 : ");
scanf("%f",&g2);
printf("Enter g3 : ");
scanf("%f",&g3);
printf("Enter g4 : ");
scanf("%f",&g4);
t1=2*PI*sqrt(l/g1);
t2=2*PI*sqrt(l/g2);
t3=2*PI*sqrt(l/g3);
t4=2*PI*sqrt(l/g4);
printf("SR. No         Length         Gravity      Time Calculated\n");
printf("  1.         %fm       %f           %.2f\n",l,g1,t1);
printf("  2.         %fm       %f           %.2f\n",l,g2,t2);
printf("  3.         %fm       %f           %.2f\n",l,g3,t3);
printf("  4.         %fm       %f           %.2f\n",l,g4,t4);
printf("23CS014_Priyanshu");
return 0;
}

