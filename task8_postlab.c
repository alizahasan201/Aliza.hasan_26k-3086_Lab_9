
#include <stdio.h>

int main()
{
    float wt, dist, base, dc, tot, disc, final;
    int mem;

    printf("Enter parcel weight in kg: ");
    scanf("%f", &wt);

    printf("Enter delivery distance in km: ");
    scanf("%f", &dist);

    printf("Are you a member? (1 for Yes, 0 for No): ");
    scanf("%d", &mem);

    if (wt <= 2)
        base = 200;
    else if (wt <= 5)
        base = 400;
    else
        base = 700;

    if (dist > 10)
        dc = (dist - 10) * 20;
    else
        dc = 0;

    tot = base + dc;
    disc = 0;

    if (mem == 1 && tot > 1000)
        disc = tot * 0.10;

    final = tot - disc;

    printf("\nBase charges: Rs. %.2f\n", base);
    printf("Distance charges: Rs. %.2f\n", dc);
    printf("Discount: Rs. %.2f\n", disc);
    printf("Final amount: Rs. %.2f\n", final);

    return 0;
}
