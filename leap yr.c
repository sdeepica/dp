#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n/400||n/4&&n/100)
    {
        printf("\nit is leap year");
    }
    else
    {
        printf("\n it is not leap year");
    }
}
