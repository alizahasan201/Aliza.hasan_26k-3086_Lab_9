#include <stdio.h>
int main()
{
    float pri, qty, sub, disc1, disc2;
    float amt, fee, final;
    int mem, card;

    printf("Enter product price: ");
    scanf("%f", &pri);
    printf("Enter quantity: ");
    scanf("%f", &qty);
    printf("Are you a member? (1 for Yes, 0 for No): ");
    scanf("%d", &mem);
    printf("Payment by card? (1 for Yes, 0 for No): ");
    scanf("%d", &card);

    sub = pri * qty;
    disc1 = 0;
    disc2 = 0;

    if (sub > 5000)
        disc1 = sub * 0.10;

    if (mem == 1)
        disc2 = sub * 0.05;

    amt = sub - disc1 - disc2;
    fee = 0;

    if (card == 1)
        fee = amt * 0.02;

    final = amt + fee;

    printf("\nSubtotal: Rs. %.2f\n", sub);
    printf("Discount (10%%): Rs. %.2f\n", disc1);
    printf("Member discount (5%%): Rs. %.2f\n", disc2);
    printf("Payment fee: Rs. %.2f\n", fee);
    printf("Final payable amount: Rs. %.2f\n", final);

    return 0;}
