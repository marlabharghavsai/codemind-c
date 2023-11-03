#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=(5*x)/y;
    if(z>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}