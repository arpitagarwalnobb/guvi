#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,t;    
printf("enter the number to check ");    
scanf("%d",&n); 
if(n>=1000)
{
	printf("out of range");
	return 0;
}
else
{
t=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(t==sum)    
printf("it is an armstrong  number ");    
else    
printf("it is not an armstrong number");    
return 0;  
}  
}
