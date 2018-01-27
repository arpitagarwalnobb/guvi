#include<stdio.h>
void main()
{
    int arr[10];
	int sum=0,n,k,i;
    printf("enter the N: ");
    scanf("%d",&n);
    printf("enter the k: ");
    scanf("%d",&k);
    printf("Enter the array: \n");
    for(i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
	{
        sum = sum + arr[i];
    }
    printf("%d\n",sum);
}
