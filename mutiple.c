#include<stdio.h>
void main()
{
	int sum=0,n,k,i;
    printf("enter the N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        sum = i * 5;
        printf("%d\n",sum);
    }
}
