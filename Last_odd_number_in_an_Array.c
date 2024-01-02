#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    int j=n-1,t;
    while(i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
}