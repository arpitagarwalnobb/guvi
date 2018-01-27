#include<stdio.h>
int main() 
{
   char b;
   printf("enter the alphabet to check");
   scanf("%c",&b);
   if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')
   {
       printf("enter alphabet is vowel");
       
   }
   else
   {
       printf("enter alphabet is consonant");
   }
}

