// Evalute Pass or Fail Taking marks from User

#include <stdio.h>

int main()
{
    printf("Enter the correct marks! 33%c in each subject & 40%c in total, is mandotory to pass the exam. This is PCM marks checking program.\n\n", 37, 37);

    float marks, phy, chem, math, total;
    printf("Enter the full marks in exam: ");
    scanf("%f", &marks);
    printf("Enter marks in Physics: ");
    scanf("%f", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chem);
    printf("Enter marks in Maths: ");
    scanf("%f", &math);
    total = phy + chem + math;
    if ((phy / marks) >= 0.33 && (chem / marks) >= 0.33 && (math / marks) >= 0.33)
    {
        if ((total) / marks >= 0.4)
        {
            printf("Congratulations!!!! You have passed the exam with %.2f%c successfully.\n", (total / (marks * 3)) * 100, 37);
        }
    }
    else
    {
        printf("Sorry, you have failed the exam.\n");
    }
    return 0;
}