#include<stdio.h>
int main()
{
    int i,n,r,sum=0,k;
    scanf("%d",&n);
    k=n*n;
    while(k!=0)
    {
        r=k%10;
        sum=sum+r;
        k=k/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}