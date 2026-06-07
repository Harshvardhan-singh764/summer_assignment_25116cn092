#include <stdio.h>

int main()
{
    int num, binary = 0, place = 1, rem;

    // Taking input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert decimal to binary
    while(num > 0)
    {
        rem = num % 2;
        binary = binary + (rem * place);
        place = place * 10;
        num = num / 2;
    }

    // Display result
    printf("Binary = %d", binary);

    return 0;
}