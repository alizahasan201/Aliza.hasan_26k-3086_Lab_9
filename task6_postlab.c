
#include <stdio.h>

int main()
{
    int age;
    float sal, pay, rem, loan;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly salary: ");
    scanf("%f", &sal);

    printf("Enter existing monthly loan payments: ");
    scanf("%f", &pay);

    rem = sal - pay;

    if (age < 21)
    {
        printf("Ineligible: Age must be at least 21.\n");
    }

    if (sal < 50000)
    {
        printf("Ineligible: Salary must be at least Rs. 50000.\n");
    }

    if (rem < sal * 0.40)
    {
        printf("Ineligible: Less than 40%% salary remains.\n");
    }

    if (age >= 21 && sal >= 50000 && rem >= sal * 0.40)
    {
        loan = rem * 10;
        printf("You are eligible for the loan.\n");
        printf("Remaining income: Rs. %.2f\n", rem);
        printf("Maximum loan amount: Rs. %.2f\n", loan);
    }

    return 0;
}
