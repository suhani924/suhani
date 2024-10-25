#include<stdio.h>
void main()
{
    
      int i,j,num;
    printf("Enter the Number:-");
    scanf("%d ",&num);
     
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}