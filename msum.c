#include<stdio.h>
#include<conio.h>
void main()
{
int n,j,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
for(j=1;j<n;j++)
{
printf("%d",j);
sum=sum+j;
}
printf("\n the sum is:%d",n,sum);
}
