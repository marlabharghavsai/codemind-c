#include<stdio.h>
int main()
{
    int n,mix;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mix=a[0];
    for(i=1;i<n;i++)
    {
        if(mix>a[i])
        {
            mix=a[i];
        }
    }
    printf("%d",mix);
}

    