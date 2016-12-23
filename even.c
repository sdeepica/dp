#include <stdio.h>

int main()
{
    int i,m, n;
    printf("Print enter the start and end number: ");
    scanf("%d%d", &m,&n);
    printf("All even numbers are: \n",m,n);
    for(i=m; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

