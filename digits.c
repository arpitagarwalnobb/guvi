#include<stdio.h>
void main()
{
int n,c=0;
printf("Enter the integer number to find number of digits");
scanf("%d",&n);

while(n!=0)

{
n=n/10;
c++;
}

printf("Total number of digits in a number is = %d",c);
}
