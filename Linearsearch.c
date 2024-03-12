#include <stdio.h>

int main()

{  

    int num;

    int i,  key, element_found = 0;

    printf("Enter number of elements you would like to take as input: ");

    scanf("%d", &num);

    int arr[num];

    printf("\nEnter all the elements of your choice:");

    for (i = 0; i < num; i++)

    {

        scanf("%d", &arr[i]);

    }

    printf("\nEnter the key element that you would like to be searched: ");

    scanf("%d", &key);

    /*  Linear search starts */

    for (i = 0; i < num ; i++)

    {

        if (key == arr[i] )

        {

            element_found = 1;

            break;

        }

    }

    if (element_found == 1)

        printf("we got the element at index %d",i+1);

    else

        printf("we havenít got element at any index in the array\n");

}
