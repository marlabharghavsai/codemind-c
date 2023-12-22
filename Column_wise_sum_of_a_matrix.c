#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,columnsum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        columnsum=0;
        for(i=0;i<r;i++)
        {
            columnsum=columnsum+a[i][j];
        }
        printf("%d ",columnsum);
    }
}