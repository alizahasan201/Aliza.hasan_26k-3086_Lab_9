#include <stdio.h>

void welcome();
void display_amo(int amount);
int getwithdrawallimit();
int calcbalance(int balance, int amount);
int checkwithdrawal(int balance, int amount, int limit);

int main()
{
    int bal, amo, lim, val, new_bal;

    welcome();

    printf("Enter your current account balance: ");
    scanf("%d", &bal);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amo);

    lim = getwithdrawallimit();

    display_amo(amo);

    val = checkwithdrawal(bal, amo, lim);

    if (val == 1)
    {
        new_bal = calcbalance(bal, amo);

        printf("Withdrawal successful!\n");
        printf("Remaining balance: Rs. %d\n", new_bal);
    }
    else
    {
        printf("Invalid withdrawal!\n");
        printf("Your balance remains: Rs. %d\n", bal);
    }

    return 0;
}

void welcome()
{
    printf("Welcome to the ATM System!\n");
}

void display_amo(int amount)
{
    printf("Withdrawal amount: Rs. %d\n", amount);
}

int getwithdrawallimit()
{
    return 50000;
}

int calcbalance(int balance, int amount)
{
    return balance - amount;
}

int checkwithdrawal(int bal, int amo, int lim)
{
    if (amo > 0 && amo <= bal && amo <= lim)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
