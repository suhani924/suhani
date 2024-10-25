#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=5;i++)
    {
        for(k=i;k<=4;k++)
        {
            printf("  ");
        }
        for(j=6-i;j<=5;j++)
        {
            printf(" %d",j);
        }
        printf(" \n");
    }
}