#include <stdio.h>

int main()
{
    int i,m, n;
    printf("Print enter the start and end number: ");
    scanf("%d%d", &m,&n);
    printf("All odd numbers from start to end are: \n", n);
    for(i=m; i<=n; i++)
    {
        if(i%2==1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
