#include <stdio.h>
int main()
{
    int base, expo,result=1;
    printf("Enter a base no.: ");
    scanf("%d", &base);
    printf("Enter an expo: ");
    scanf("%d", &expo);
    while (expo != 0)
    {
        result *= base;
        --expo;
    }
    printf("Answer = %d", result);
    return 0;
}
