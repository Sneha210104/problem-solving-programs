#include<stdio.h>
void main()
{
    int a;
    printf("enter the value of any year");
    scanf("%d",&a);
    (a%4==0&&a%100!=0||a%400==0)?printf("leap year"):printf("not a leap year");
}
