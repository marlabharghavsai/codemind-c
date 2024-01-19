#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n],i,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            t=i;
        }
    }
    printf("%d",t);
}