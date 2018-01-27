#include<stdio.h>  
int main()    
{    
int n,r,sum=0,t;    
printf("enter the number=");    
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
sum=(sum*10)+r;    
n=n/10;    
}    
if(t==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}
}   
