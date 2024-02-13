#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    printf("enter 3rd number");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("1st number is greater");
    }
    else if(b>c)
    {
        printf("2nd number is greater");
    }
    else {
        printf("3rd number is greater");
    }
    return 0;
}
