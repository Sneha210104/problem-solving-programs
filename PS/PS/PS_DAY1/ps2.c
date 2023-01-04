#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three no");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest%d",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d b is greatest",b);
    }
    else
    {
        printf("c is greatest %d",c);
    }
}
