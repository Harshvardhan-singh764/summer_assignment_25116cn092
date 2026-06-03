#include <stdio.h>

int main()
{
    int start, end, i, j, prime;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++)
    {
        prime = 1;

        if(i <= 1)
            prime = 0;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
            printf("%d ", i);
    }

    return 0;
}