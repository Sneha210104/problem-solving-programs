#include<stdio.h>
void main()
{
    int num[10],i,size,sum=0,mid,sum1=0,l,r;
    printf("enter size:\n");
    scanf("%d",&size);
    printf("enter any digit number:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }
    l=0;
    r=size-1;
    mid=(l+r)/2;
    for(i=0;i<mid;i++)
    {
        sum=sum+num[i];
    }
    for(i=mid+1;i<=r;i++)
    {
        sum1=sum1+num[i];
    }
    if(sum==sum1)
    {
        printf("no is balanced");
    }
    else
    {
        printf("not balanced");
    }
}
