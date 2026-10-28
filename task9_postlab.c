
#include <stdio.h>

int main()
{
    int choice;
    float bal, amo;

    bal = 20000;

    while (1)
    {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Current balance: Rs. %.2f\n", bal);
        }
        else if (choice == 2)
        {
            printf("Enter deposit amount: ");
            scanf("%f", &amo);

            if (amo > 0)
            {
                bal = bal + amo;
                printf("Deposit successful.\n");
                printf("Updated balance: Rs. %.2f\n", bal);
            }
            else
                printf("Amount must be positive.\n");
        }
        else if (choice == 3)
        {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amo);

            if (amo <= 0)
                printf("Amount must be positive.\n");
            else if (amo > 10000)
                printf("Maximum withdrawal is Rs. 10000.\n");
            else if (amo > bal)
                printf("Insufficient balance.\n");
            else
            {
                bal = bal - amo;
                printf("Withdrawal successful.\n");
                printf("Updated balance: Rs. %.2f\n", bal);

                if (bal < 5000)
                    printf("Warning: Low balance!\n");
            }
        }
        else if (choice == 4)
        {
            printf("Thank you for using the ATM.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
