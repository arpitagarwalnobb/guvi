#include<stdio.h>
int main() 
{
   int a;
   printf("enter the number to check");
   scanf("%d",&a);
   if(a==0)
   {
       printf("enter number is zero");
       
   }
   else if(a<0)
   {
       printf("enter number is negative");
   }
   if(a>0)
   {
       printf("enter number is positive");
   }
}

