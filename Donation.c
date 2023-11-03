#include<stdio.h>
int main()
{
    int X,Y,r;
    scanf("%d%d",&X,&Y);
    r=Y-X;
    if(Y>X)
    {
        printf("%d",r);
    }
    else if(X>Y)
    {
        printf("%d",r);
    }
}