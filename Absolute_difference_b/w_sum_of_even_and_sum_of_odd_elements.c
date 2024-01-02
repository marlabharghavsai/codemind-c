#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,sum1=0,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            sum=sum+ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            sum1=sum1+ar[i];
        }
    }
    k=abs(sum1-sum);
    printf("%d",k);
}