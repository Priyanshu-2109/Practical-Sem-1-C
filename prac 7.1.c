// This code is prepared by 23CS014_Div_1
#include<stdio.h>
int main()
{
  int a[25],positive=0,negative=0,odd=0,even=0;
  printf("Enter 25 intgers :");
  for(int i=0;i<25;i++)
    {
   scanf("%d",&a[i]);
  }
for(int i=0;i<25;i++)
{

    if(a[i]>0){
        positive++;
    }
    if(a[i]<0){
        negative++;
    }
    if(a[i]%2==0){
        odd++;
    }
    if(a[i]%2!=0){
        even++;
    }
}
printf("Positive = %d\n",positive);
printf("Negative = %d\n",negative);
printf("Odd = %d\n",odd);
printf("Even = %d\n",even);
printf("\n23CS014_Priyanshu");
    return 0;
}


