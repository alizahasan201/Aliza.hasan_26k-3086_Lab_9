#include <stdio.h>
int main()
{
    int n, org, rev, d, i, prime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    org = n;
    rev = 0;

    if (n % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    if (org == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    prime = 1;

    if (org <= 1)
        prime = 0;
    else
    {
        for (i = 2; i < org; i++)
        {
            if (org % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");

    return 0;
}
 return 0; }
