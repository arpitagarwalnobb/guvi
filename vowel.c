#include<stdio.h>
int main() 
{
   char b;
   printf("enter the aphabet to check");
   scanf("%c",&b);
   if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
   {
       printf("enter number is vowel");
       
   }
   else
   {
       printf("enter number is consonant");
   }
}

