// This code is prepared by 23CS014_Priyanshu
#include<stdio.h>
#include<conio.h>
void main()
{
    long int pop, litpop, popmen, popwomen, poplit, litmen,
     litwomen, ilitmen, ilitwomen;
    pop=80000;
    popmen=(52 * pop)/100;
    popwomen=pop-popmen;
    litpop=(48 * pop)/100;
    litmen=(35 * pop)/100;
    litwomen=litpop-litmen;
    ilitmen=popmen-litmen;
    ilitwomen=popwomen-litwomen;
    printf("\n\n");
    printf("\n\nTotal population of the city  :- \t%ld",pop);
    printf("\n\nTotal population of the men   :- \t%ld",popmen);
    printf("\n\nTotal population of the women :- \t%ld ",popwomen);
    printf("\n\nLiterate population of men    :- \t%ld",litmen);
    printf("\n\nLiterate population of women  :- \t%ld",litwomen);
    printf("\n\nIliterate population of men   :- \t%ld",ilitmen);
    printf("\n\nIliterate population of women :- \t%ld",ilitwomen);
    printf("\n\n23CS014_Priyanshu");
}

