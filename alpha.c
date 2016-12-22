#include<stdio.h>
#include<conio.h>
void main()
{
char m;
printf("enter the character:");
scanf("%c",&m);
if((m>='a')&&(m<='z')||(m>='A'&&m<='Z'))
printf("the character is an alphabet",m);
else
printf("the character is not an alphabet");
}
