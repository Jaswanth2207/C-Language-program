#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Select the function that you want to perform from below list:\n");
    printf("1 for Addition,\n2 for Subtraction,\n3 for Multiplication,\n4 for Division,\n5 for Remainder\n");
    scanf("%d",&c);
    switch(c)
    {
    case(1): {
        d=a+b;
        printf("The sum of the 2 numbers = %d",d);
        break;
    }
    case (2): {
        d=a-b;
        printf("The Difference of the 2 numbers =%d",d);
        break;
    }
    case (3):
    {
        d=a*b;
        printf("The product of the 2 numbers =%d",d);
        break;
    }
    case(4):
    {
        d=a/b;
        printf("The Division for the 2 numbers =%d",d);
        break;
    }
    case (5):
    {
        d=a%b;
        printf("The Remainder for the 2 numbers =%d",d);
        break;
    }
    }
    return 0;
}
