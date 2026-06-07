#include <stdio.h>

int main()
{
    int num, i, j;
    int largestPrimeFactor = 0, isPrime;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find all factors
    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            isPrime = 1;

            // Check if factor is prime
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1)
            {
                largestPrimeFactor = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrimeFactor);

    return 0;
}