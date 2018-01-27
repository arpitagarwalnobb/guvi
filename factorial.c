#include<stdio.h>
void main()
{
	int sum=1,n,k,i;
    printf("enter the Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        sum = i * sum;
    }
    printf("%d\n",sum);
}
