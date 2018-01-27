#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("enter the third number");
	scanf("%d",&c);
	
	if(a<b)
	{
		printf("second number is Greater");
	}
	else if (a<c)
	{
		printf("third number is Greator");
	}
	else
	printf("first number is greator");
}

