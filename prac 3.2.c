// This code is prepared by 23CS014_Priyanshu
#include<stdio.h>
#include<conio.h>
int main()
{
   int Yellow,Pink,answer;
   Yellow=10;
   Pink=20;
   printf("Before execution of calculation\n");
   printf("\nYellow = %d\n",Yellow);
   printf("\nPink   = %d\n",Pink);
   answer=++Yellow + Yellow++ + --Yellow + ++Pink -
    --Pink - --Pink;
   printf("\nAfter execution of calculation\n");
   printf("\nAnswer = %d\n",answer);
   printf("\nYellow = %d\n",Yellow);
   printf("\nPink   = %d\n",Pink);
   printf("\n23CS14_Priyanshu");
   return 0;
}

