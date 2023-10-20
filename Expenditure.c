#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a/(b*30);
    if(c>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}