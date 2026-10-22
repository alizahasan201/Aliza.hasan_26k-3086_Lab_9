#include <stdio.h>

void welcome();
void show_menu();
int get_price(int choice);
int calc_item_price(int price, int quantity);
int calc_subtotal(int quan[]);
int calc_discount(int subtot);
int calc_final_bill(int subtot, int disc);
void display_receipt(int quan[], int subtot, int disc, int fbill);
int continue_shopping();

int main()
{
    int quan[5] = {0};
    int choi, pri, qty, itemtot;
    int subtot, disc, fbill, cont;

    welcome();

    cont = 1;

    while (cont == 1)
    {
        show_menu();

        printf("Enter product number (1-5): ");
        scanf("%d", &choi);

        if (choi >= 1 && choi <= 5)
        {
            printf("Enter quantity: ");
            scanf("%d", &qty);

            if (qty > 0)
            {
                pri = get_price(choi);

                itemtot = calc_item_price(pri, qty);

                quan[choi - 1] = quan[choi - 1] + qty;

                printf("Price of selected items: Rs. %d\n", itemtot);
            }
            else
            {
                printf("Invalid quantity!\n");
            }
        }
        else
        {
            printf("Invalid product choice!\n");
        }

        cont = continue_shopping();
    }

    subtot = calc_subtotal(quan);

    disc = calc_discount(subtot);

    fbill = calc_final_bill(subtot, disc);

    display_receipt(quan, subtot, disc, fbill);

    return 0;
}

void welcome()
{
    printf("Welcome to Shopping Management System!\n");
}

void show_menu()
{
    printf("\n----- PRODUCT MENU -----\n");
    printf("1. Notebook   - Rs. 200\n");
    printf("2. Pen        - Rs. 50\n");
    printf("3. Bag        - Rs. 1500\n");
    printf("4. Calculator - Rs. 800\n");
    printf("5. Headphones - Rs. 2500\n");
}

int get_price(int choi)
{
    switch (choi)
    {
        case 1:
            return 200;

        case 2:
            return 50;

        case 3:
            return 1500;

        case 4:
            return 800;

        case 5:
            return 2500;

        default:
            return 0;
    }
}

int calc_item_price(int pri, int qty)
{
    return pri * qty;
}

int calc_subtotal(int quan[])
{
    int i, pri, total;

    total = 0;

    for (i = 0; i < 5; i++)
    {
        pri = get_price(i + 1);

        total = total + calc_item_price(pri, quan[i]);
    }

    return total;
}

int calc_discount(int subtot)
{
    if (subtot >= 5000)
    {
        return subtot * 10 / 100;
    }
    else
    {
        return 0;
    }
}

int calc_final_bill(int subtot, int disc)
{
    return subtot - disc;
}

void display_receipt(int quan[], int subtot, int disc, int fbill)
{
    int i, pri, itemtot;

    printf("\n\t\tSHOPPING RECEIPT\n");

    for (i = 0; i < 5; i++)
    {
        if (quan[i] > 0)
        {
            pri = get_price(i + 1);

            itemtot = calc_item_price(pri, quan[i]);

            if (i == 0)
                printf("Notebook");

            else if (i == 1)
                printf("Pen");

            else if (i == 2)
                printf("Bag");

            else if (i == 3)
                printf("Calculator");

            else
                printf("Headphones");

            printf(" | Price: Rs. %d | Quantity: %d | Total: Rs. %d\n",
                   pri, quan[i], itemtot);
        }
    }

    printf("--------------------------------------\n");
    printf("Subtotal: Rs. %d\n", subtot);
    printf("Discount: Rs. %d\n", disc);
    printf("Final Bill: Rs. %d\n", fbill);
    printf("Thank you for shopping!\n");
}

int continue_shopping()
{
    int choi;

    printf("\nDo you want to continue shopping?\n");
    printf("Enter 1 for Yes or 0 for No: ");
    scanf("%d", &choi);

    return choi;
}
