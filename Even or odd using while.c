#include<stdio.h>
int main()
{
    int a=1,b,even=0,odd=0;
    printf("enter the end value: ");
    scanf("%d",&b);
    printf("\nEven numbers: ");
    while(a<=b)
    {
        if(a%2==0)
        {
            printf("\n%d",a);
            even++;
        } 
        a++;   
    }
    printf("\nodd numbers: ");
    a=1;
    while(a<=b)
    {
        if(a%2==1)
        {
            printf("\n%d",a);
            odd++;
        }
        a++;
    }
    printf("\nThe total even no's: %d",even);
    printf("\nThe total odd no's : %d",odd);
    return 0;
}
