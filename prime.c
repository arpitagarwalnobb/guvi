#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("num: ");
    scanf("%d",&n);
    
    for(i=2;i<=n/2;i++)
	{
        if(n%i == 0)
		{
            c++;
        }
    }
    if(c>0)
	{
        printf("it is not an prime number");
    }
    else
	{
        printf("it is prime number");
    }
    
}

