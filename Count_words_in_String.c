#include<stdio.h>
int main()
{
    char s[20];
    int c=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i];i++)
    {
        if(s[i]==32)
        c++;
    }
    if(i>0)
    c++;
    printf("%d",c);
}