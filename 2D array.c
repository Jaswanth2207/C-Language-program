#include<stdio.h>
int main()
{
    int i,j, Jmatrix[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&Jmatrix[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",Jmatrix[i][j]);
        }
        printf("\n");
    }
}
