#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x/(2*y);
    if(z>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}