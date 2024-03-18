// 23CS014 Chnaiyara Priyanshu
#include<stdio.h>
int main()
{
    int a[10],b[10],c[20],i,n1,n2,swap;
    printf("Enter the size of first array :");
    scanf("%d",&n1);
    printf("Enter elements in array :\n");
    for(i=0; i<n1 ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array :");
    scanf("%d",&n2);
    printf("Enter the elements in array :\n");
    for(i=0; i<n2 ; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0; i<n1+n2 ; i++)
    {
        if(i<n1)
        {
            c[i]=a[i];
        }

        else
        {
            c[i]=b[i-n1];
        }

    }
    printf("\nMerged Array :");
    for(i=0; i<n1+n2 ; i++)
    {
        printf("\n%d",c[i]);
    }
    int n=n1+n2;
    for(i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(c[j]<c[j+1])
            {
                swap=c[j];
                c[j]=c[j+1];
                c[j+1]=swap;
            }
        }
    }
    printf("\nSorted list in ascending order :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",c[i]);
    }
    printf("\n23CS014 Chnaiyara Priyanshu");

    return 0;
}
