#include<stdio.h>
int main()
{
    int age,a,b;
    printf("Enter the age in years : ");
    scanf("%d",&age);
    a=age,b=age;
    printf("The three immediate integral ranges are : ");
        a=++a;
        b=--b;
        printf("%d to %d ,",b,a);
        a=++a;
        b=--b;
        printf(" %d to %d ",b,a);
        a=++a;
        b=--b;
        printf("and %d to %d",b,a);
    return 0;
}