#include<stdio.h>
void main()
{
   char c;
   printf("enter any character");
   scanf("%c",&c);
   if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
   {
       printf("entered character is a vowel");
   }
   else
   {
       printf("entered character is a consonant");
   }
}
