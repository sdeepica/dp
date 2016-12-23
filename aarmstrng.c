#include<stdio.h>
main()
{
    int a,b,temp=0,sum=0,r,n;
    printf("Enter the range: \n");
    scanf("%d %d",&a,&b);

    for(n=a;n<=b;n++)
    {
        temp=n;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(temp==sum)
            printf("%d \n",sum);
        sum=0;
        n=temp;
    }
}
