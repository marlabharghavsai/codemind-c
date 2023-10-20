#include<stdio.h>
int main()
{
    int E,M,P,C,CS;
    scanf("%d%d%d%d%d",&E,&M,&P,&C,&CS);
    if(E<34)
    {
        printf("FAILED");
    }
    else if(M<34)
    {
        printf("FAILED");
    }
     else if(P<34)
    {
        printf("FAILED");
    }
     else if(C<34)
    {
        printf("FAILED");
    }
     else if(CS<34)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
}  