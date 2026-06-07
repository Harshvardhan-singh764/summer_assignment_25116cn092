#include <stdio.h>

int main()
{
    int binary, decimal = 0, base = 1, rem;

    // Taking binary number as input
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    while(binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + (rem * base);
        base = base * 2;
        binary = binary / 10;
    }

    // Display result
    printf("Decimal = %d", decimal);

    return 0;
}