#include<stdio.h>
void main()
{
    char i;
    printf("enter the i value");
    scanf("%c",&i);
    if(i>='a'&&i<='z')
    printf("alphabet");
    else if (i>='A'&&i<='Z')
    printf("alphabet");
    else
    printf("No");
}
