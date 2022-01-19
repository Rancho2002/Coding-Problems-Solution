#include <stdio.h>

void sum_avg(int num1, int num2, int *sum, float *avg)
{
    *sum = num1 + num2;
    *avg = (float)*sum / 2;
}
int main()
{
    printf("Enter 2 integers. This program give the sum and avg of that two integers at a time.\n\n");
    int i, j, sum;
    printf("Enter num 1: ");
    scanf("%d", &i);
    printf("Enter num 2: ");
    scanf("%d", &j);
    float avg;
    sum_avg(i, j, &sum, &avg);
    printf("The sum of %d & %d is %d and average of 3 & 6 is %0.2f", i, j, sum, avg);
    return 0;
}