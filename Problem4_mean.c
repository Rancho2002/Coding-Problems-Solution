#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//* creating mean function
float mean(int arr[], int size)
{
    // printf("yeah I am calling");//:::Debugging:::

    //! according to mean defination
    float sum = 0, meanVal; // correction: sum changed to float!

    // printf("\narr[0]=%d", arr[0]); //:::Debugging:::

    for (int i = 0; i < (size - 1); i++) // :::size-1 is mandatory as I have post incremented the size by 1 in main:::
    {
        sum += (float)arr[i]; // typecasting each number to float is mandatory
    }

    /*printf("\nsum=%f", sum);
     printf("\nsize=%d\n", size); :::Debugging:::
    */

    meanVal = sum / (size - 1);

    //! how to determine size of an array after passing it to a function?
    // printf("\nsize of arr=%d\n", s);//:::Debugging:::
    // int s = sizeof(arr[size]) / 4;

    return meanVal;
}
int main()
{
    int size = 1;
    float result;
    char execute;
    // defining size of mean box
    int digits[size];
label:
    printf("Press 'N'/any key to enter new value or 'X' to view the result : ");
    // getchar();
    fflush(stdin);

    scanf("%c", &execute);

    //* logic of this code;
    fflush(stdin);
    // !creating the loop to determine size automatically without taking from user
    while (1)
    {
        if (execute != 'X' && execute != 'x')
        {
            printf("Enter Value %d : ", size);
            fflush(stdin);
            scanf("%d", &digits[size - 1]);
            // printf("\n%d\n", size);//:::Debugging:::
        }

        else
        {
            if (size > 1)
            {

                // printf("\nsize while calling=%d\n", size); //:::Debugging:::

                result = mean(digits, size);
                printf("The mean value of these numbers are %f", result);
                break;
            }
            else
            {
                printf("You have not entered any number!");
                break;
            }
        }
        size++;
        goto label;
    }

    return 0;
}