#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the number of digits");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[i]%2==0)
    {
        printf("2");
    }
    else if(arr[i]==1)
    {
        printf("1");
    }
    else
    {

    }

}
