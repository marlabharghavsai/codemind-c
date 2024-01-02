#include<stdio.h>
int main()
{
    int i,n,ad,sum1=0,sum2=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum1=sum1+i;
       k=sum1*sum1;
       sum2=sum2+i*i;
       ad=k-sum2;
    }
    printf("%d",ad);
}