#include<stdio.h>

int main()
{
    int a,b;
    printf("\n enter two integers:");
    scanf("\n %d %d",&a,&b);
    printf("\n before swapping: a = %d,b + %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n after swapping: a = %d,b + %d\n",a,b);
    return 0; 
}