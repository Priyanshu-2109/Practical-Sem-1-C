//23CS014 Chaniyara Priyanshu
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,sum=0;
    float average;
    printf("Please Enter The Nth Term to find the average\n");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Allocation Failed!\n");
        exit(0);
    }
    else
    {
        printf("Memory Allocation Successful!\nEnter the terms\n");
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ptr[i]);
        }
        for(int i=0; i<n; i++)
        {
            sum+=ptr[i];
        }
        average=(float)sum/n;
        printf("The Average of the given numbers is: %.2f",average);


        free(ptr);
        printf("\n\n23CS014 Chaniyara Priyanshu");
        return 0;
    }
}

