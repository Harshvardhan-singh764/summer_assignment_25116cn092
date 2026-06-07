#include <stdio.h>

int main()
{
    int num, temp, digit;
    int fact, sum = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number

    // Finding sum of factorials of digits
    while(temp > 0)
    {
        digit = temp % 10;
        fact = 1;

        // Calculate factorial of the digit
        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    // Check if number is Strong Number
    if(sum == num)
    {
        printf("%d is a Strong Number.", num);
    }
    else
    {
        printf("%d is not a Strong Number.", num);
    }

    return 0;
}