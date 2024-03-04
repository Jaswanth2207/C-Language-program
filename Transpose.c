#include<stdio.h>
int main()
{
    int i,j,jasu[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf(" %d",&jasu[i][j]);
        }

    }
    printf("Matrix of A \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d",jasu[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix A \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d",jasu[j][i]);
        }
        printf("\n");
    }
    return 0;
}
