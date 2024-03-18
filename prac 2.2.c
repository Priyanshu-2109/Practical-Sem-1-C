//This code is prepared by 23CS014_Priyanshu
#include <stdio.h>
#include<conio.h>
void main()
{
int BasicSalary,DA,HRA,MA,TA,PF,IT,NetSalary,allowances
,deduction;
printf("Enter Basic Salary :");
scanf("%d",&BasicSalary);
DA=BasicSalary*(0.7);
HRA=(0.07)*BasicSalary;
MA=(0.02)*BasicSalary;
TA=(0.04)*BasicSalary;
PF=(0.12)*BasicSalary;
IT=500;
allowances=DA+HRA+MA+TA;
deduction=PF+IT;
NetSalary=BasicSalary+allowances-deduction;
printf("Basic Salary = %d Rs.\n",BasicSalary);
printf("DA = %d Rs.\n",DA);
printf("HRA = %d Rs.\n",HRA);
printf("MA = %d Rs.\n",MA);
printf("TA= %d Rs.\n",TA);
printf("Allowances = %d Rs.\n",allowances);
printf("PF = %d Rs.\n",PF);
printf("IT = %d Rs.\n",IT);
printf("Deduction= %d Rs.\n",deduction);
printf("\nNet Salary = %d Rs.",NetSalary);;
printf("\n\n23CS014_Priyanshu");
}

