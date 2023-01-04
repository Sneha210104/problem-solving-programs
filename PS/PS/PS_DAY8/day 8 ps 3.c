#include<stdio.h>
void main()
{
    int num,sum=0,r,temp;
    printf("enteer any digit");
    scanf("%d",&num);
    while(num>10)
    {
        while(num!=0)
        {
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        temp=sum;
        sum=num;
        num=temp;
    }
    printf("%d",num);
}
