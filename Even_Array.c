#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0 || ar[i]==0)
        {
            count=count+1;
        }
    }
    if(count==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}