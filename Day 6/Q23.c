#include <stdio.h>

int main()
{
    int num, count = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count set bits (1s in binary form)
    while(num > 0)
    {
        if(num % 2 == 1)
        {
            count++;
        }

        num = num / 2;
    }

    // Display result
    printf("Number of set bits = %d", count);

    return 0;
}