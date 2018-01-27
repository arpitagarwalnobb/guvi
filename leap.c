#include <stdio.h>
int main()
{
	int a;
	printf("enter the year that you want to check");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("leap year");
	}
	else
	printf("Not an leap year");
}

