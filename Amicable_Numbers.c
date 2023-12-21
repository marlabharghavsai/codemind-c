#include<stdio.h>
int main()
{
    int i,n,m,firstdivisor=0,seconddivisor=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            firstdivisor=firstdivisor+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            seconddivisor=seconddivisor+i;
        }
    }
    if((n==seconddivisor) && (m==firstdivisor))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}