#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int m=x1+y1;
    int n=x2+y2;
    if(m<n)
    {
        printf("%d",m);
    }
    else
    {
        printf("%d",n);
    }
}