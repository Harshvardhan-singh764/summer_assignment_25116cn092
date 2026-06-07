#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding all factors except the number itself
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    // Checking if sum of factors equals the number
    if(sum == num)
    {
        printf("%d is a Perfect Number.", num);
    }
    else
    {
        printf("%d is not a Perfect Number.", num);
    }

    return 0;
}